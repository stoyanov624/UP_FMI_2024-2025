# Lab 7
## What will we learn today?
* structural data types
* one-dimensional arrays
* multidimensional arrays

## Structural data types
When we need to store and process quantitative information (for example: the working hours of 100 workers in a company) instead of using 100 different variables and remembering which one is used for which worker, we can use structural (also composite) data types.

## Arrays
An array is a structural (composite) data type, representing a finite array of **elements of the same type** with **direct access to each element**. An array is a collection of data types that allows us to access many variables of the same type via an **identifier**. In the array declaration, we use square brackets ([]) to tell the compiler that this is an *array variable* (instead of a normal variable), as well as how many consecutive (by address) cells ("variables") to allocate in memory (called the length of the array).

```c++
int hours[100];
```

![](images/memory.png) &nbsp;&

### Array declaration
To build an array, the most important thing we need to determine is the **number of elements** and **their type**.
​
int arr[5]; - this is how we declare an array of type int with 5 elements
double dArr[10]; - this is how we declare an array of type double with 10 elements
char str[100]; - this is how we declare an array of type char with 100 elements

The number of elements can also be set using a constant that is predefined;
```c++
const int n = 3;
long array[n];
```
Access to each element is achieved through an indexed variable, which specifies the **array name** and the **index** (the sequential number of the element in the array) enclosed in square brackets.
```c++
array[0]; // indexing in arrays is from 0 to (the number of elements - 1)
```
### Array initialization
###### First way:

```c++
int arr[5];
arr[0] = 5;
arr[1] = -3;
arr[2] = 12;
arr[3] = 6;
arr[4] = 123015;
```

##### Second way:

```c++
int arr[5] = {5, -3, 12, 6, 123015};
```

##### Third way:

```c++
int arr[] = {5, -3, 12};
```

##### Fourth way:
We can also initialize an array with values ​​entered from the keyboard.
```c++
double arr[5];
for(int i = 0; i < 5; i++)
cin >> arr[i];
```

#### Allowed operations
Operations on entire arrays ***are not allowed***.

```c++
int a[5], b[5] = {1,2};
a = b; // illegal operation
```

### Input and output of array names
#### Input:

```c++
double arr[5];
for(int i = 0; i < 5; i++)
{
cout << "arr[ " << i << " ]= ";
cin >> arr[i];
}
```

#### Output:

```c++
double arr[5];
...
for(int i = 0; i < 5; i++)
{
cout << "arr[ " << i << " ]= " << arr[i] << endl;
}
```
## Character string (C-Style string/string)
An array of type char is called **character string**.
Examples:
​
"Informacionni sistemi"
"My name is Mery"
"" // empty string
"My name" // substring of "My name is Mery"

Strings are used to form sentences in a language, process texts, encode information, encode commands, and more.

### Declaring a character string
When declaring a string, you must provide space for one more character: \0 - null character (denotes the end of a string). This character is not printed, it simply provides the necessary information to the compiler.

char str[100]; - this is how we declare an array of type char with 100 elements

### Array initialization
###### First way:

```c++
char chArr[4] = {'A','B','C','\0'};
```

##### Second way:

```c++
char chArr[4] = "ABC";
```

##### Third way:

```c++
char chArr[256];
cin >> chArr; // However, this will only take one word. That is, if we enter Hello world! (We will initialize a character string with only Hello).
```

##### Fourth way:
We can also initialize an array with values ​​entered from the keyboard.
```c++
char chArr[256];
//cin.ignore()
// in case we have some normal cin before the character string, cin.ignore() must be written.
// example -> cin >> n; cin.ignore(); cin.getline(chArr,256); cin.getline(otherCharArr,256);
// ONLY WHEN WE HAVE A NORMAL CIN BEFORE A GETLINE, CIN.IGNORE() IS WRITTEN BEFORE CIN.GETLINE
cin.getline(chArr, 256)
// this way we will read the entire line even if there are spaces and if we enter Hello world!
// it will take the entire line, as long as we do not write something with more than 255 characters
// (the 256th is for the terminating 0 (#nerverforget)).
```

### Cool way to find the length of a character string!
```c++
char chArr[256];

cout << "Enter char array: ";
cin.get();
cin.getline(chArr,256);

int length = 0;

while (chArr[length] != '\0') {
++length;
}
```

The number of elements can also be set using a constant that is predefined;
```c++
const int SIZE = 3;
char key[SIZE];
```
**Access** to each element, as with other arrays, is achieved through an indexed variable, which specifies the **array name** and the **index** (the sequential number of the element in the array) enclosed in square brackets.
```c++
key[0]; // indexing in arrays is from 0 to the number of elements -1
```

## Multidimensional arrays
An array is a structural (composite) data type, representing a finite array of elements of the same type with **direct access to each element**.
**Multidimensional arrays** are usually described as **"arrays of arrays"**, but to make it easier to imagine,
we will use a two-dimensional array that looks like a table or matrix (like in algebra :D).
Multidimensional arrays, just like one-dimensional ones, are made up of the same data type (int, char, double, etc.).

![alt text](https://github.com/KristinStefanova/UP_FMI_IS_2017-2018/blob/master/week07/diagrams/matrixRep.jpeg)

This is a two-dimensional array, which in C++ can be declared like this:
```c++
int arr[3][5];
```
This array can be viewed as: **a variable(arr)** of type **int**, which contains ***3 arrays of 5 elements each***,
or **a matrix with 3 rows and 5 columns (more often)**.

### Declaring an array
To build a two-dimensional array, the most important thing we need to define is the **number of elements**, **their type** and
**number of rows and columns**. For example:
```c++
int arr[3][5]; - this is how we declare an array of type int with 3 rows and 5 columns (total 15 elements)
double dArr[10][10]; - this is how we declare an array of type double with 10 rows and 10 columns (total 100 elements)
char str[4][6]; - this is how we declare an array of type char with 4 rows and 6 columns (total 24 elements)
```
The number of **rows and columns** can also be set **through constants**, which are **predefined**.
```c++
const int ROWS = 3;
const int COLUMNS = 5;
...
int array[ROWS][COLUMNS];
```

### Array initialization
#### First way:
#
```c++
int arr[2][2]; // two rows and two columns, total 2 * 2 = 4 elements
arr[0][0] = 5;
arr[0][1] = -3; //arr looks like this: 5 -3
arr[1][0] = 12; // 12 6
arr[1][1] = 6;
```

#### Second way:
#
```c++
int arr[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
```
It is clear:

![](images/matrixRep.jpeg) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

#### Second way:
It is not necessary to fill in all the values, as well as to use the inner brackets to indicate the elements of the rows. Although some compilers will allow you to omit the inner parentheses, we strongly recommend that you include them anyway, both for the purposes of code readability and for the way C++ will replace missing values ​​with 0.

```c++
int array[3][5] =
{
{ 1, 2 }, // row 0 = 1, 2, 0, 0, 0
{ 6, 7, 8 }, // row 1 = 6, 7, 8, 0, 0
{ 11, 12, 13, 14 } // row 2 = 11, 12, 13, 14, 0
};

```
#### Second way'':
Two-dimensional arrays with initializing lists of elements can **omit only the leftmost** length specification:
```c++
int array[][5] =
{
{ 1, 2, 3, 4, 5 },
{ 6, 7, 8, 9, 10 },
{ 11, 12, 13, 14, 15 }
};
```
The compiler can figure out what the length of the array is. However, the following is **not allowed**:
```c++
int array[][] =
{
{ 1, 2, 3, 4 },
{ 5, 6, 7, 8 }
};
```
#### Third way:
We can also initialize a two-dimensional array with values ​​entered from the keyboard.
```c++
double arr[3][5];
for(int i = 0; i < 3; i++) // we have 3 rows
 {
 for(int j = 0; j < 5; j++) // and 5 columns
 {
 cin >> arr[i][j];
 }
 }
```

### Access to an element
Access to each element is carried out through an indexed variable, which specifies the **array name** and the **index** (the ordinal number of the element in the array) i.e. the **number of the row and column in which the element is located**, enclosed in square brackets.
```c++
arr[1][3]; // indexing in two-dimensional arrays is also from 0 to the number of
// elements -1 in the corresponding row or column
```

![](images/matrixRepAccess.jpeg) &nbsp;&

### Allowed operations
Operations on entire two-dimensional arrays ***are not allowed***.

```c++
int a[3][5], b[3][5];
a = b; // not allowed operation
```

### Input and output of array elements
#### Input:
#
```c++
double arr[3][5];
for(int i = 0; i < 3; i++)
{
for(int j = 0; j < 5; j++)
{
cout << "arr[ " << i << " ][ " << j << " ]= ";
cin >> arr[i][j];
}
}
```

#### Output:
#
```c++
double arr[3][5];
...
for(int i = 0; i < 3; i++)
{
for(int j = 0; j < 5; j++)
{
cout << "arr[ " << i << " ][ " << j << " ]= " << arr[i][j] << ' ';
}
cout << endl;
}
```
### Memory
Memory is a series of cells, each of which has its own size and address. When we say *how many cells ("variables") to allocate in memory*, we mean that there must be as many free cells in memory, with the corresponding size of the array type (variables of this type), as we have indicated, so that we can occupy them. For example, if we keep the working hours of 100 workers, our array in memory will look like the picture above.

#### The memory that you can use in a C++ program is generally of three types:
* static

This memory stores variables declared outside functions (so-called global variables). They are visible to all functions throughout the execution of the program
* stack

This memory stores passed parameters and variables defined inside functions and in any block. Variables are visible only in the function (block) in which they are defined and are destroyed when the function is completed (exiting the block)
* dynamic

The rest of the computer's memory is accessible to all programs upon request. The operating system takes care of managing this memory. At any given moment, a separate block of memory may be free or reserved for a program, where only that program can read it. When a program tries to read memory that is not allocated to it, regardless of whether it is allocated to another program or is free, the operating system terminates the program with an Access Violation error

### sizeof()
Sizeof is an operator that shows us how much memory (in bytes) a given variable of a given type occupies.
```c++
#include <iostream>
using namespace std;

int main()
{
cout << "bool:\t" << sizeof(bool) << " bytes" << endl;
cout << "char:\t" << sizeof(char) << " bytes" << endl;
cout << "short:\t" << sizeof(short) << " bytes" << endl;
cout << "int:\t" << sizeof(int) << " bytes" << endl;
cout << "long:\t" << sizeof(long) << " bytes" << endl;
cout << "float:\t" << sizeof(float) << " bytes" << endl;
cout << "double:\t" << sizeof(double) << " bytes" << endl;
cout << "long double:\t" << sizeof(long double) << " bytes" << endl;

return 0;
}

```

bool: 1 bytes
char: 1 bytes
short: 2 bytes
int: 4 bytes
long: 8 bytes
float: 4 bytes
double: 8 bytes
long double: 16 bytes

When we use sizeof() on an array, we again get the size in bytes. For example, if our array is of type char and has a size of 100 elements, then its size is 100 elements * 1 byte = 100 bytes.
```c++
#include <iostream>
using namespace std;

int main()
{
int arr[100];
char str[100];

cout << sizeof(arr) << " bytes" << endl;
 cout << sizeof(str) << " bytes" << endl;

 return 0;
} 
```