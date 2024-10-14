# **Практикум #1**
**Програмата за днес:**

- Getting to know the course leaders
- FMI 101</li>
- Discussion of how the course will run


# First steps in programming - IDE

![](images/visual-studio.jpg) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
![](images/visual-studio-code.png)


## What is an IDE?
To be able to write the programs we want, we first need an IDE or Integrated Development Environment is a software application that provides a complete software development environment to programmers. For our programs, we recommend Visual Studio or Visual Studio Code! (For Visual Studio Code there is a tutorial folder on how to set it up)

# Course start!

## C++ syntax and semantics

To define the **syntax** of a programming language is to specify a set of rules according to which a string of symbols is a program. To define the **semantics** of a programming language is to define the rules according to which programs in that programming language are executed.

### Alphabet of C++

Both spoken languages ​​and programming languages ​​have their own alphabet (allowable symbols and signs), words and constructions that serve to express.

### The following symbols are allowed in the programs:

- lowercase and uppercase Latin letters
- the numbers from 0 to 9
- special characters + - * / = () [] {} | & ! < > # $ ^ % ^ ~ _ . , : ; ' "
- separators - space, tab and new line

### Case Sensitive

**Language is case sensitive:**

```
Example: ime ≠ Ime ≠ IME for ≠ For ≠ FOR
```

## Words in the language

### Identifiers

for naming user-created variables, constants, data types, etc. **Must start with a letter and contain letters, numbers and _**

```
Correct: Min, MaxN, A5, _start, AA, B105
Wrong: 10a, Sredna Suma, Nai.Malko, SUMA
```

### Reserved (keywords).

identifiers that have a meaning that cannot be changed. Denotes the language constructs of the C++ language.

```
For example: if, for, while, break, int, double
```

### Standard words included in the language's standard libraries

They have a special meaning which can however be redefined.

```
Example: cout, cin, sqrt, ceil
```

### Statements

The statements are the smallest elements of the program (the series of instructions in our program). Simply put statement = statement. Each operator must end with **;**.

### Variables

A variable is a data storage location that can hold different values ​​during program execution. Variables have several characteristics:

- A place in memory
- Name (ID)
- Type
- Value

Before they can be used, they must be defined. C++ is a strongly typed programming language. Every variable has a type, which is explicitly specified when defining it.

### Constants

These are units of the language, like variables, but unlike them, constants cannot change their value.

### Punctuation and separators

They are used ** ; < . > ][ { } ( ) .**, delimiters are standard-space, tab, newline.

### Comments – single-line and multi-line (Comments)

Portions of program code that are ignored during execution and serve to explain the program or temporarily shut down code.

```c++
// single line comment

/*
 multiline comment
*/
```

**Comments of the same type do not nest within each other and do not comment on obvious things.**

### Declaration of variable(Declaration of variable)

```
<type> <name>;
```

```c++
int a;
double b;
```

*A variable with the specified **type** and **name** is declared.*

### Definition of variable

```
<type> <name> = <value>;
```

```c++
int a = 5;
double b = 3.45;
```

*Defines a variable with the specified **type** and **name** and initializes it with a **value**.*

### Define a constant

```
const <type> <name> = <value>;
```

```c++
const int pi = 3.14;
```

*Defines a constant with the specified **type**, **name**, and **value**.*

### Assignment command

```
<variable> = <expression>;
```

```c++
sum = 2 + 3*4;
a = b = c = 0;
```

*The value of the expression is evaluated and **assigned** to the variable.*

## Console login/logout

### Input command

```
cin >> <variable>;
```

```c++
cin >> n;
cin >> a >> b >> c;
```

*Waiting for **keyboard input** and assigning it to a variable. Values ​​may be separated by a space or newline character.*

**cin is defined in the <iostream.h> library**

### Output command

```
cout << expression;
```

```c++
cout << 2 + 2;
cout << a <<" + "<< b <<" = "<< a + b << endl;
```

*The expression is evaluated and its value is **displayed.** **endl** is used to add a new line.*
**cout is defined in the <iostream.h> library**

## Numeric types

### Integer

Often in our programs we use the type **int**, through it we use whole numbers, as they are used in mathematics.

```
1, 17, 1,000,000, -56, 75, 101
```

- Set of values:[-2^31; 2^31-1](4 bytes)
- Modifiers:
 - short [ -2^15; 2^15-1 ] (2 bytes)
 - long [ -2^63; 2^63-1 ] (4 bytes)
 - unsigned [ 0; 2^x -1 ] (x = 16, 32, 64) (up to 4 bytes)
- Operations:
 - +a, -a (unary)
 - +, -, * (multiplication), / (quotient), % (remainder) (binary)
 - ==. !=, <, >, <=, >= (comparison)
- We declare a variable of type **int** using **int <variable name>;**

### Floating point numbers

The **double** type, on the other hand, expresses the real numbers (floating point numbers) from mathematics.

```
1, 2.34, 12e-2, 10.14E+03, .23
```

- Multiple values: [-1.74 * 10^308; 1.74 * 10^308](8 bytes)
- Operations:
 - +a, -a (unary operations)
 - +, -, * (multiplication), / (quotient) (binary)
 - ==. !=, <, >, <=, >= (comparison)
- We declare a variable of type **double** using **double <variable name>;**

Another type for real numbers is the **float** type

- Multiple values: [-3.4 * 10^38; 3.4 * 10^38](4 bytes)
- Operations:
 - +a, -a (unary operations)
 - +, -, * (multiplication), / (quotient) (binary)
 - ==. !=, <, >, <=, >= (comparison)

### Built-in math functions for numeric types

```c++
#include <cmath/math.h>

abs(x) absolute value, x is an integer expression
fabs(x) absolute value, x is a real expression
sin(x), cos(x), tan(x), asin(x), acos(x), atan(x)
exp(x), log(x) - natural, log10(x) - decimal logarithm
ceil(x) – round up, floor(x) – round down
sqrt(x) – square root, pow(x, n) – x to power n
```

### Character type

The character type - **char** is used to be able to use characters such as letters, numbers, punctuation marks.

```
'a', '9', '!'
```

- Set of values:[-128, 127](1 byte)
- We declare a variable of type **char** using **char <variable name>;**
- Modifiers:
 - unsigned char [0, 255]
 Interesting: Actually characters are numbers.(Everything comes down to numbers :) ). What is the result of this:

```c++
cout << 'a' - 5 << endl;
```

We will find out why the result is 92 in the next point. Check out the character code table. Also called ASCII table.->[ASCII](http://www.asciitable.com/)

### Boolean type

Boolean or more logical type **bool** we use to store logical values, which are actually only **two** - **true** and **false**, or 0 and 1. The logical type is very important for programmers...you've heard that everything in a computer is 0's and 1's. Here the operations are a little different from ordinary ones, so we will pay close attention to them a little later.

- array of values: true and false(1 byte)
- We declare a variable of type **bool** using **bool <variable name>;**

## Type conversion

C++ is a strongly typed language. Each expression has a type (int, double, etc.)

```c++
 int a = 5;
 int b = a;
 double d = 3.14159 * 2.0;
 cout << (a + b) * 34245543 – a;
```

When assigning a value to a variable (or constant), we can use an expression of another type.

```c++
 double x = 5; // int → double
 int i = 4; short s = i; // int → short
 i = 3.14; // double → int, i becomes 3
```

### Implicit conversion

In the previous examples, implicit (implicit) type conversion is performed. When converting to "more
large” type, there is no data loss (the value of the expression remains the same).

| Type | Converts to |
| ----- | --------------------: |
| bool | all numeric types |
| short | int |
| float | double |

### Implicit and explicit conversion

If the conversion is not to a "larger" type, there may be a loss. The compiler may issue a warning.
Warning means that the syntax of the language is respected, but it is very likely that an error was made.

### Explicit conversion

An expression is preceded by a new type (surrounded by brackets):

```
double x = 3.14; int i = (int)x * 2;
```

Expressions of the same type can be combined with the operations defined for that type. The new expression is of the same type.

## Basic operations(Operations)

Data types, in addition to a set of values ​​and the space they occupy in memory, are also characterized by basic operations of the type. For example, for numeric types, there are arithmetic and comparison operations.

Let us define:

```c++
 int x = 3;
 int y = 5;
```

### Arithmetic operations

the result of such an operation depends on the types of the variables involved in the expression.

| Operator | Action | Example |
| -------- | :------------------------------------------------: | ---------: |
| + | sums the two operands | x + y = 8 |
| - | subtracts the two operands | y - x = 2 |
| * | multiplies the two operands | x * y = 15 |
| / | divides the first operand by the second | y / x = 1 |
| % | takes the remainder when dividing the first operand by the second | y % ​​x = 2 |
| ++ | increments the value of the operand by 1 | x++ is 4 |
| - - | decrements the value of the operand by 1 | y-- is 4 |

Note: There is a difference between ++x, x++, --y and y--. When the operation is in front of the variable, it is executed immediately and the value of the variable is changed on the "current line", while with x++ (y--), we again change the value of the variable, but on the "current line" we work with the previous value.

Example:

```c++
{
 int x = 5;
 std::cout << (x++) + 5 ; // increment the value by one, but on this row x = 5 => 10
 std::cout << x; // 6
}
```

### Comparison operations

The result of these operations is actually of boolean type.

| Operator | Action | Example |
| -------- | :------------------------------------------------: | -----------------: |
| == | returns true if x and y are equal, otherwise returns false | x == y returns false |
| != | returns true if x and y are different, otherwise returns false | x != y returns true |
| > | returns true if x is greater than y, otherwise returns false | x > y returns false |
| < | returns true if x is less than y, otherwise returns false | x < y returns true |
| >= | returns true if x is greater than or equal to y, otherwise returns false | x >= y returns false |
| <= | returns true if x is less than or equal to y, otherwise returns false | x <= y returns true |

### Logical operations

The result here is of boolean type, too.

#### Logical multiplication operator(conjunction)

| A| B | A && B |
| ----- | :---: | -----: |
| false | false | false |
| false | true | false |
| true | false | false |
| true | true | true |

#### Logical addition operator(disjunction)

| A| B | A \|\| B |
| ----- | :---: | -------: |
| false | false | false |
| false | true | true |
| true | false | true |
| true | true | true |

#### Logical negation operator

| A| not A |
| ----- | ----: |
| false | false |
| true | false |

Let us define:

```c++
 bool x = true; // can be written bool x = 1;
 bool y = false; // can be written bool y = 0;
```

| Operator | Action | Example |
| --------- | :------------------------------------------------: | --------------------: |
| && (and) | returns true only if both x and y are true, otherwise returns false | x && y returns false |
| \|\| (or) | returns true if at least one of x and y is true, returns false only if both x and y are false | x \|\| y returns true |
| ! (not) | returns true if false and vice versa | !x is false, !y is true |

