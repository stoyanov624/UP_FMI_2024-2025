# Practicum 5
## What did we learn last time?
* Nested loops
* Tasks on all types of cycles

## What will we learn today?
* Features
 * Main objectives, concepts, syntax
 * Declaration and definition
 * Returning/non-returning value


## Functions
### What are functions and what do we use them for
Functions allow the program to be structured into segments that perform individual tasks. We can also say this: A function is a group of operators that is given a name and can be called in any part of our program.

The main objectives of the functions are:
 - to divide the execution of our main task into subtasks (simplifying the task)
 - the avoidance of code repetition
 - improve code readability

### Basic concepts
Here we will distinguish the following:
 - function declaration - tells the compiler that a function exists with: name, return type and parameters to the function
 - definition of a function - here it is specified what exactly is the body of the function (i.e. its implementation)

### Syntax
#### The basic syntax of a function, in its definition, is:

```c++
return_type function_name( parameter_list )
{
 body_of_the_function
}
```

where:
 - **return_type (return type)** - indicates what the type of the return value from the function will be
 - **funtion_name** - this is the name of the function. Through it we will be able to refer to the function itself when we want it to be executed
 - **parameter_list** - list of parameters to be passed to the function. This list is optional, i.e. we can have a function,
 which **does** not accept parameters. If such exists, they are written according to the model: **<type> name | <type> name = value**
 - **body_of_the_function (body of the function)** - the rules by which the given function will be executed

Example:
We will make a program that will find the sum of two integers:

```c++
#include <iostream>

int sum(int numLeft, int numRight)
{
 return numLeft + numRight;
}

int main()
{
 int result = 0; // good practice is to initialize the value on creation so it doesn't get filled with some random value

 result = sum(4, 5);

 std::cout << "Sum = " << result;

 return 0;
}
```

This function tells us the following: **return value type** will be type **int**, **function name is sum** and it will **accept two integers.** In the main function ) we create a variable in which we will store the summation result. Note that I use the same type as the function (int). We need to pass two values ​​to the function, in this case 4 and 5. Then I output the result, which in this case is 9.

### Function declaration
Declaring a function only tells the compiler that we have a function, without telling how it is implemented.

Example:

```c++
return_type function_name( parameter list);
int sum(int numLeft, int numRight);
```

So our program will know that the sum function exists, which has two parameters, but that's about it. How the function is implemented, we need to say further. With some conventions of the language, it is recommended that the declaration be placed **before the main function**.

### Function definition
Defining a function is actually just that extra thing we tell the compiler. The definition represents the implementation of the function, or more simply, it is the **body content** of the function - the functionality of the function.

Example:
```c++
int sum(int numLeft, int numRight)
{
 return numLeft + numRight;
}
```

Example of using declaration and definition:

```c++
#include <iostream>

int sum(int numLeft, int numRight);

int main()
{
 int result = 0; // good practice is to initialize the value on creation,
  // so it doesn't get filled with some random value

 result = sum(4, 5);

 std::cout << "Sum = " << result;

 return 0;
}

int sum(int numLeft, int numRight)
{
 return numLeft + numRight;
}
```
So we say there is a function sum and when called and in the main function, the program will look for where the definition of that function is.

### NB!: Functions we say return a type always have **return <type_component>;**
What exactly does this say?
When we say that a function must return a real type, it is expected that there will be a return statement somewhere in the function. It says that the execution of the function is terminated and the value assigned to it to the right of it will be returned.

Example:
```c++
 return (5 + 9);
```
It will return an integer result of 14 (it reaches return, evaluates the value of the expression, and returns it as the result)

After return you can have more complex expressions.
Example:

```c++
bool isEven(int number)
{
 return (number % 2 == 0 ? true : false);
}

float someWeirdFunction(float number)
{
 return (number + 365 - sin(45));
}
```

### Functions that do not return a value
These are functions whose purpose **does not outline returning a value.** They are used when we want to enter/change a value or output a message. **In these functions we skip the return statement**. Of course, it is possible to use it. When we use it we return a **nothing**-empty operator, i.e. we end up with a **return;** operator, which terminates the execution of the function and does not return a value. (remember it ends with ;)

Example:
```c++
void message()
{
 std::cout << "This is message\n";
}

void someFunction()
{
  if (true)
  {
  std::cout << "True";
  return ;
  }
  else
  {
  std::cout << "False";
  return ;
  }

  std::cout << "This will never show on screen";
}
```

In someFunction, the last message will never be displayed because in both cases of the logical condition we have given return; which will terminate the function execution.

An example with everything up to here (the program has only an educational purpose):
```c++

#include <iostream>

int input(); // enter a positive number
int sum(const int numLeft, const int numRight); // perform summation of numbers

bool isNegative(int number); // checks if the number is negative. Return type - bool

void message(); // Message
void output(int number); // Output with a number
void legos(); // assembly

int main()
{
 legos();

 return 0;
}

int input()
{
 int tmp;

 do
 {
 message();

 std::cin >> tmp;
 } while (isNegative(tmp));

 return tmp;
}

bool isNegative(int number)
{
 return number < 0;
}

void message()
{
 std::cout << "Number must be positive\n";
}

int sum(const int numLeft, const int numRight)
{
 return (numLeft + numRight);
}

void output(int number)
{
 std::cout << "Result = " << number << std::endl;
}

void lego()
{
 int numLeft = 0, numRight = 0;

 numLeft = input();
 numRight = input();

 output(sum(numLeft, numRight));
}
```

Let's pay some attention to passing parameters to functions.
In the above examples, we have seen that when calling a function with parameters, we must pass them, the order in which they are passed matters, ie:

![](images/pic1.jpg) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;