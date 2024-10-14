# Tasks - Practicum 2

Task 0
----------

Check if a given integer is divisible by 2 and if so print "YES" to the console otherwise "NO"

**Sample output for number 8 :** YES

**Example output for number 3 :** NO


Task 1 - Calculator
----------
Write a simple calculator that supports the following two-digit operations:

| Operation | Symbol |
| --------- |:------:|
| gathering | + |
| subtraction | - |
| multiplication | * |
| division | / |

### Input data
- operation – one of the symbols `+`, `-`, `*` or `/`
- operands – two fractional numbers of type `double'

The operation and operands are entered from standard input.

### Output data
- the result of the input operation on the input operands

The result is output to standard output.

### Example
Input: `* 2 21`
Output: `42` <br><br>

Task 1 - BMI
----------

Body mass index or **body mass index (BMI)** is an indicator that serves to determine the normal, healthy weight in people of different heights and to determine obesity or malnutrition. The body mass index is measured in kilograms per square meter and is determined by the following formula:

#### BMI = W / h*h where
W = your weight, h = your height

Write a program that, given weight and height, calculates a person's BMI.

P.S: The normal weight index is 18.5-24.9
<br><br>

Task 2 - Unique numbers
----------

Enter a four-digit number and if all digits are different display "YES" on the console otherwise "NO". You can check if the number is four digits.

**Sample output for the number 1231 :** NO, not all numbers are different!

**Example output for the number 1234 :** YES, all the numbers are different!


Task 3 - Divisibility
-----------------
and check whether a given integer number is divisible by 2 and if so, yes s
is output to the console "YES" otherwise "NO"

**Sample output for number 8 :** YES

**Example output for number 3 :** NO

Task 4 - Valid sides of a triangle
-----------------

To enter three real numbers and see if they can be sides of a triangle (a < b + c) (b < a + c) (c < a + b).

**Example output for the numbers 1 1 2 :** NO, you can't make a triangle out of this :(

**Example output for the numbers 3 4 5 :** YES, you can make a triangle out of this :)

Task 5 - Quadrants
-----------------

Based on the entered coordinates of point A, x and y (ie A(x, y)) to determine in which quadrant it lies according to the coordinate system.

**Sample output at x = 4 y = -3 :** Forth.

**Sample output for x = 4 y = 3 :** First.

**Sample output at x = -4 y = 3 :** Second.

**Sample output at x = -4 y = -3 :** Third.

**Sample output at x = 0 y = 10 :** On axis.

Task 6 - Leap year
-----------------

By entered year to check if it is a leap year

**Sample output for 2020:** The year is leap

**Sample output for 2003:** The year is not leap

**Example output at 2000:** The year is leap

**Sample output at 1900:** The year is not leap

Task 7 - Capital and small letters
-----------------

Determine whether the letter is uppercase or lowercase by an entered symbol between a and z or A and Z

**Example output for a:** Lower case letter

**Sample output at t:** Lower case letter

**Sample output at T:** Upper case letter

**Exampled at 8:** The character is NOT a letter
ice, when you solve the problem, instead of writing what the letter is, you can say it
transform in its upper/lower case (If it is not a letter, write again that there is an error)

Task 8 - Functionality menu
-------------------

Create a program that presents the user with a menu of options such as **calculate area**, **convert units**, and **display information**. The user must enter a number of his choice, after which the program will perform the corresponding operation using conditional statements (switch or if-else). After the execution of the selection, the program ends correctly.

**Bonus**: It is desirable to repeat as little code as possible (variables mainly).

**Example**:

When running the program in the terminal it should be displayed

```cmd
Menu:
1. Calculate Area
2. Convert Temperature
3. Display Information
Enter your choice (1-3): _
```

You choose option 2 to calculate temperature and then it comes out:

```cmd
Choose the type of conversion:
1. Miles to Kilometers
2. Fahrenheit to Celsius
Enter your choice (1-2): _
```

You choose option 1 and you get:

```cmd
You chose option 1: Miles to Kilometers.

Enter the distance in miles: 10
```

The program ends with:

```cmd
10 miles is equal to 16.09 kilometers.
```

Task 9 - Rectangle
------------

Write a program that, given a point {x,y}, checks if it lies on one of the sides of a rectangle {x1,y1} - {x2,y2}.
The input data is read from the console and consists of 6 input-a (x1, y1, x2, y2 and the point **x,y**).

To print `Border` if the point lies on either side / `Inside` / `Outside` otherwise.

Example input:
2
-3
12
3
12
-1

Output: `Border'

Task 10 - Volleyball
--------------

Vladi is a student, lives in Sofia and goes to his hometown from time to time. He is very passionate about volleyball, but he is busy on weekdays and only plays volleyball on weekends and holidays. Vladi plays in Sofia every Saturday when he is not at work and traveling to his hometown, as well as on 2/3 of the holidays. He travels to his hometown `h` times a year, where he plays volleyball with his old friends on Sundays. Vladi is not at work 3/4 of the weekends he is in Sofia. Separately, during leap years, Vladi plays 15% more volleyball than normal. We assume that there are exactly 48 weekends suitable for volleyball in the year.

Write a program that calculates how many times Vlady has played volleyball during the year. Round the result down to the nearest whole number (eg 2.15 -> 2; 9.95 -> 9).

The input data is read from the console:

- The first line contains the letter "L" (leap year) or "N" (normal year with 365 days).

- The second line contains the integer p – number of holidays in the year (which are not Saturdays or Sundays).

- The third line contains the integer h - number of weekends in which Vladi travels to his hometown.

Example input: L 5 2

Exit: 45

Example input: N 3 2

Exit: 38
