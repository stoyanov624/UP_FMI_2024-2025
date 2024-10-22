# Practicum #3
## What did we learn last time?
* Boolean expressions
* Block {}, data visibility
* if constructs
* Construction?:
* switch construction
## What will we learn today?
* Constructs for loops
 * Break and continue operators
 * Nested loops


## Loops
Suppose a friend of yours asks you to write him a program that outputs the first 5 powers of the number X. What will you do? Using mathematical thinking we get here:

```c++
 #include <iostream>
 using namespace std;

 int main()
 {
  int x;

  cout << "X= ";
  cin >> x;

  cout << x << endl;
  cout << x * x << endl;
  cout << x * x * x << endl;
  cout << x * x * x * x << endl;
  cout << x * x * x * x * x << endl;

  return 0;
 }
```

However, your friend is mistaken. He wanted it not to be 5, but **25**. Well, in that case you might go with the above approach again..it will take forever and you'll be writing the same thing many times, adding a new multiplier all the time. Yes - dumb and inefficient. So what do we do then? We notice that there is a **repetition of the same statement until a given condition is violated.** And this shows that we have a **cyclicity** or even a **loop**.

### Each cycle consists of 4 main parts:
#### 1) initialization
- An initial value is set to some variables that participate in the cycle. Also called a **correction**.
#### 2) body of the cycle (body)
- This is a block that contains the statements we want to repeat multiple times.
#### 3) update
- The values ​​of some of the variables involved are updated in order to prepare for the next execution of the body.
#### 4) condition for the end of the cycle (condition)
- Serves to guarantee the termination of the cycle (otherwise it will repeat "infinitely").

**One execution of the loop body is called an *iteration*.**

## Loops with a precondition
Preconditional loops are a tool that can be used to execute certain actions multiple times by first checking whether a condition is met. We will consider two constructions with such a design - for and while.

Flowchart:

![](images/for.png) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

### for construction(for statement)
Syntax:
```c++
for ( <initialization>; <end-condition>; <update> )
{
  <loop-body>
}
```
Semantics:
The execution starts with the initialization of values, then the end condition is checked, if it returns true, the loop body is executed, then the operations in update are executed. Everything then continues from checking an end condition, and so on, until that condition returns false and execution is terminated, continuing execution of the code after the for construct.

Flowchart:

![](images/for-2.png) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

Example: Print the numbers 0 to 9
```c++
#include<iostream>

int main()
{
  for (int index = 0; index < 10; index++)
  std::cout << index << " ";

  return 0;
}
```
### While construction (while statement)
Syntax:
```c++
while (<boolean-expression-end-condition>)
{
  <loop-body>
}
```

Semantics: The result of <condition-for-end-boolean-expression> is checked, if the returned value is true then <body-of-the-loop> is executed, if the returned result is false - the execution of the while statement is terminated and the execution of the code after it. There must be an update somewhere in the loop body, otherwise we end up in an infinite loop.

Flowchart:

![](images/while.png) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

Example: Print the numbers 0 to 9
```c++
#include<iostream>

int main()
{
  int index = 0;

  while (index < 10)
  {
  std::cout << index << " ";
  index = index + 1; // eq ++index;
  }

  return 0;
}
```

## Loops with postcondition
In this kind of loops, the idea is to execute the body of the construct first and then check the termination condition.
The difference between the two philosophies (pre-condition and post-condition) is that in the second it will **always execute the body at least once** and in the former it is possible not to execute even once.

Flowchart:

![](images/do-while.png) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

### do-while construct(do-while statement)

Syntax:
```c++
do
{
  <struct-body>
}
while (<condition-to-end-boolean-expression>);
```
#### PAY ATTENTION TO ; AFTER WHILE !!!

Semantics: The construct body is executed first, then the <boolean-expression-end-condition> is checked, if the returned result is true the construct body is executed again, otherwise the construct execution is terminated.

Flowchart:

![](images/do-while-2.png) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

Example: Print the numbers 0 to 9
```c++
#include<iostream>

int main()
{
  int index = 0;

  do
  {
  std::cout << index << " ";
  index++;
  }
  while (index < 10);


  return 0;
}
```

### NB!
#### In the while and do-while loops, initialization is done outside the loop construct. In any one build, any one element of the 4 can be omitted, but sometimes the cost is a broken program. Be careful! Check if you have a case where execution will be interrupted. Otherwise, you will end up in an endless loop;

### break operator (break statement)
Suppose we are looking for the number 7 in a series of numbers. For example, the series:
​
  1 29 3 5 7 11 56 96 4

We begin to successively compare the numbers from the row with our number-7. As we notice, the number 7 is in the middle of the row. Well, we found it! Is it necessary after we have found 7 to keep looking? - No. How to terminate the search. In programming, we use the break operator. We've already seen it with the **switch** operator. Here, however, **break** is used when we want to **force** end a loop.

```c++
#include <iostream>
using namespace std;

int main()
{

  int temp_number;
  int size_of_sequence;

  cin >> size_of_sequence;
  for (int i = 0; i < size_of_sequence; i++)
  {
  cin >> temp_number;
  if (temp_number == 7)
  {
  cout << "You're lucky! " << endl;
  break
  }
  }

  return 0;
}
```


### Auxiliary flags (flags)
Besides **break**, we can use auxiliary flags. Such a variable (**flag**) serves to mark the change of some condition by changing its value from 0 to 1 and vice versa. Yes, it's fine if the flags are of type **bool**.

```c++
#include <iostream>
using namespace std;

int main()
{

  int temp_number;
  int size_of_sequence;
  bool flag = false; // we have removed the flag

  cin >> size_of_sequence;

  for (int i = 0; i < size_of_sequence && !flag; i++)
  {
  cin >> temp_number;
  if (temp_number == 7)
  {
  cout << "You're lucky! " << endl;
  flag = true; // raise the flag so we'll end the loop
  }
  }

  if (flag == false) // notify the user that we didn't find 7
  cout << "Sorry! :( " << endl;

  return 0;
}
```

### operator continue (continue statement)
While the **break** operator offers a convenient and easy way to **terminate the entire loop**, the **continue** operator offers a convenient way to **terminate the current iteration**, i.e. the part of the loop body after the continue statement is skipped.
Example: In a row of 10 numbers, we want to count the number of numbers that are odd

```c++
#include <iostream>
using namespace std;

int main()
{

  int temp_number;
  int counter = 0;

  for (int i = 0; i < 10; i++)
  {
  cin >> temp_number;
  if (temp_number % 2 == 0)
  continue;
  counter++;
  }

  cout << "Odd numbers are: " << counter << endl;

  return 0;
}
```


​
### Nested loops
When the body of any loop contains another loop, we say we have **nested loops**. They are most often used when working with tables of numbers (**matrices**). We can insert as many cycles as we want. When we have only 2 loops, one is called **outer** and the other **inner**. The nested loops can be of different constructions.

Example: Printing the numbers 1 to 9 in a grid
```c++
#include <iostream>
using namespace std;


int main()
{
  int k = 1;
  for (int i = 0; i < 3; i++) // extern
  {
  for (int j = 0; j < 3; j++) // internal
  {
  cout << k ;
  k++;
  }
  cout << endl;
  }

  return 0;
}
```