# Practicum #2
## What did we learn last time?
* Introduction to the course
* Basic concepts
* Syntax and semantics of C++
* Basic elements in the C++ language
* Data types
* Basic operations with data types
* How to create a project in a programming environment
 * Visual Studio
 * Visual Studio Code
## What will we learn today?
* Boolean expressions
* Block {}, data visibility
* if constructs
* Construction?:
* switch construction

## Boolean expressions
### One condition
As we saw in the previous exercise, when we want to check **whether something is true or not**, we use the **bool** type in various boolean expressions. We also saw that comparison operators return a Boolean (Boolean) value, but **only one condition** can be compared to them. For example, if we want to check whether two numbers are equal, we can directly output the result of the comparison.
```c++
 int x = 5;
 int y = 3;
 cout << x == y; // 0
 cout << x >= y; // 1
 cout << x != y; // 1
```
### Several conditions
 For example, if we are late for UP, we either missed the bus, or we hang out in front of the FMI, or we leave the ticket for 6/49. In these cases, we **combine different Boolean expressions into a larger expression**, interested in its result. To combine we use **conjunction(logical-AND)** and **disjunction(logical-OR)**. Try to guess the result of the following expressions:
```c++
 int x = 5;
 int y = 4;
 int z = x;

 cout << (x == z) && (y < x) && (y != z);
 cout << !(z == y) || (x != y) || (x <= z);
```
We can combine by using different logical operators. Try to guess the answer:
```
 (true && true) || false
 (false && true) || true
 (false && true) || false || true
 (5 > 6 || 4 > 3) && (7 > 8)
 !(7 > 6 || 3 > 4)
```
But their mixing is not random. These operators have **priority** like addition and multiplication in math. **Boolean-AND has higher priority than logical-OR**, so logical-AND operators will be evaluated before logical-OR operators. For example expressions like **value1 || value2 && value3** evaluates to **value1 || (value2 && value3)**, not as **(value1 || value2) && value3**.
### NB!
#### When mixing logical-AND and logical-OR operators in the same expression, it is good practice to explicitly specify the operands of each operator. This helps prevent precedence errors, makes your code easier to read, and clearly defines how you intended to evaluate the expression. For example, instead of writing value1 && value2 || value3 && value4, better write (value1 && value2) || (value3 && value4).

#### De Morgan's Laws - logical-NOT
Many programmers make the mistake of thinking that **!(X && Y) is the same thing as !X && !Y**. Unfortunately, though, you can't "use" logical-NOT like this.

**De Morgan's** laws tell us how logical expressions should be converted in these cases:

 !(X && Y) is equivalent to !X || !Y
 !(X || Y) is equivalent to !X && !Y

**In other words, when you use a logical-NOT, you must reverse the logical-AND to a logical-OR, and vice versa!**

## Block {} (Block), data visibility (Scope)
Block in a program we will call pieces of code that are surrounded by { <...> }. Typing convention requires that new lines after the opening bracket - { start indent from the preceding line (generally with one tab space).
```c++
{
  std::cout << "One tab inside" << std::endl;
}
```

**Visibility of the variables**, we call the part of the program where we can **access** the given variables. Visibility, depending on how we look at it, we can divide it into 3 categories:
 - Inside a function or block, it is called a local variable
 - In a function definition - it's called a formal parameter (we'll cover it in detail shortly)
 - Outside of all functions, then it is called a global variable

**Local variables are visible only in the specific block in which they are declared and in each of its subblocks.**
**Global variables are defined outside of all functions, usually at the top of the program. They can be accessed from all blocks in the program.**

Conclusion: **Avoid using global variables if possible! If you must use them, use them wisely and with caution.**

```c++
#include<iostream>

// Global variables
bool check;

int main()
{
  // Local variables
  int age = 19, fn = 56789;

  std::cout << age;

  {
  std::cout << " " << fn;
  }

  check = true;
  return 0;
}
```

## if constructs (if-statement)
Controlling the flow of a program, deciding **when given fragments to execute and when not**, is an important skill for any programmer. Different tools are used for this skill. One such tool is the **conditional operator**, it checks **if a given condition is met and, based on that result, executes a specified consequence** by the programmer. The conditional operator has two basic constructions (forms): **short and full.**

### Short form of if
Syntax:
```c++
if (<boolean_expression>)
{
  // ...
  // block of operations to be executed
  // ...
}
```

Semantics: The result of <boolean_expression> is checked, if the return value is true then the block of operations is executed, if the return result is false the block is skipped, i.e. nothing will be executed.

```c++
#include <iostream>

int main()
{
  const int ALLOW_AGE = 18;
  int age = 16;

  if (age < ALLOW_AGE)
  std::cout << "Drink denied" << std::endl;

  return 0;
}
```

### Full form of if
Syntax:
```c++
if (<boolean_expression>)
{
  // ...
  // block of operations to be executed
  // ...
}
else
{
  // ...
  // block of operations to be executed
}
```

Semantics: The result of <boolean_expression> is checked, if the returned value is true then the first block of operations is executed, if the returned result is false - the second block.

```c++
#include<iostream>

int main()
{
  const int ALLOW_AGE = 18;
  int age = 16;

  if (age < ALLOW_AGE)
  {
  std::cout << "Drink denied" << std::endl;
  }
  else
  {
  std::cout << "Drink permitted" << std::endl;
  }

  return 0;
}
```

#### Nested form

```c++
#include<iostream>

int main()
{
  int number = 15;

  if (number % 3 == 0)
  {
  if (!(number % 5))
  std::cout << "Divided by 3 and 5" << std::endl;
  else
  std::cout << "Divided by 3 but not by 5" << std::endl;
  }

  return 0;
}
```
### Other forms - if-else-if
Syntax and Semantics:
```c++
if ( <boolean_expression> )
{
  // ...
  // If <boolean_expression> evaluates to true, this operation block will be executed
  // ...
}
else if ( <other_boolean_expression> )
{
  // ...
  // If <other_boolean_expression> evaluates to true AND <boolean_expression> evaluates to false,
  // then this operation block will be executed
  // ...
}
else // this clause is optional
{
  // ...
  // this block will be executed if <boolean_expression> AND <otherboolean_expression> evaluate to false
  // ...
}
```

```c++
#include<iostream>

int main()
{
  int a = 19;
  if (a % 2 == 0)
  {
  std::cout << "divided by 2" << std::endl;
  }
  else if (a % 3 == 0)
  {
  std::cout << "divided by 3" << std::endl;
  }
  else
  {
  std::cout << "Not divided by 2 and 3" << std::endl;
  }

  return 0;
}
```
## Construction ?: (Ternary operator)
?: is a form that resembles the if - else construction. We will formally call the operator ?: **ternary operator**.

Syntax:
```c++
<boolean_expression> ? <true_operator> : <false_operator>
```
Semantics:
The Boolean expression is evaluated, then executed at:
 - return result true (true) - the operator is executed after ?
 - false result returned - the operator is executed after:

```c++
#include<iostream>

int main()
{
  const int ALLOW_AGE = 18;
  int age = 19;

  std::cout << (age < ALLOW_AGE ? "Drink denied" : "Drink permitted") << std::endl;

  return 0;
}
```

When is it convenient?

## Switch statement (Switch statement)
The **switch** operator allows a given variable to be tested for equality among a list of values. Each value to check is called a **case.**

Syntax:
```c++
switch(<expression|value>)
{
  case <value_to_check>: <operations_to_perform>; break // break; it is not mandatory
  ...
  case <value_to_check>: <operations_to_perform>; break

  default: <operations_to_perform>; break
}
```
Semantics: We pass a given value as the switch parameter, then it is checked in which case the value from this parameter will match in value with some check value, in which case the operations passed to this case are performed. If no value matches the supplied one, the default case is executed.

### Additional rules:
 * you can have an **unlimited number of cases**, and for each one you must give a value to be checked against;
 * the values ​​we check against must be **of the same type** as the one submitted for verification;
 * when a match is detected **the submitted operations are performed until a break operator is encountered**, i.e. if it entered the second case and there is no break in it, all operators in the remaining cases will be executed until a break operator is reached;
 * upon reaching break, the execution of the switch statement is **terminated and the execution of the program continues** after it;
 * default is **optional**, i.e. it is not required by the switch statement syntax. It is used when none of the listed conditions have been met and we want to note this;
```c++
#include <iostream>
 
int main() {
 // local variable declaration:
 char grade = 'D';

 switch(grade) {
 case 'A' :
 std::cout << "Excellent!" << std::endl;
 break
 case 'B' :
 case 'C' :
 std::cout << "Well done" << std::endl;
 break
 case 'D' :
 std::cout << "You passed" << std::endl;
 break
 case 'F' :
 std::cout << "Better try again" << std::endl;
 break
 default :
 std::cout << "Invalid grade" << std::endl;
 }
 std::cout << "Your grade is: " << grade << std::endl;

 return 0;
}
```