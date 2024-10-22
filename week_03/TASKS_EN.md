# Tasks - Practicum 3

## Task 0 - Sum of 10
### To write a program that, after inputting 10 numbers by the user, calculates their sum!

**Sample output on input 1 2 3 4 5 6 7 8 9 10:** 55

## Task 0.5 - Destroy numbers
### To write a program that, after entering a positive real number, prints it, but with a value of 0.5 less until the number becomes less than 0

**Sample output at input 10:** 9.5 9 8.5 8 . . . . 1 0.5

Task 1 - Factorial
------------

To calculate n! for a user-entered number n.
<br><br>


Task 2 - Sum to zero
------------
Any number of numbers are entered from the keyboard. Find the sum of all the numbers until 0 is entered.

Example:

Login: 1 2 3 0

Exit: 6
<br><br>

Task 3 - Sum of the digits
------------
A natural number is entered from the keyboard. Find the sum of its digits.

Example:

Entrance: 5550

Exit: 15
<br><br>

Task 4 - Simple number
------------
Given a natural number, determine whether it is prime.

Example:

Entrance: 8

Exit: NO

Entrance: 7

Output: YES
<br><br>

Task 5 - Fibonacci series
------------
Given a natural number n, output the nth number from the Fibonacci sequence.

Example:

Entrance: 5

Output: 5 (because 0 (F0), 1 (F1), 1 (F2), 2 (F3), 3(F4), 5 (F5) -> 5 is the fifth number in the Fibonacci sequence)
<br><br>

## Task 6 - Grading
### Write a program that takes a real number and an integer and returns the former to the power of the latter without using cmath/math.h.

**Sample output on input 2 10:** 1024

**Sample output at input 2 -1:** 0.5

**Sample output at input 5 0:** 1

**Sample output on input -10 2:** 100

**Sample output on input -10 3:** -1000

**Sample output on input 0 100:** 0

**Sample output on input 0 0:** unknown

## Task 7 - Square
### To write a program that draws a square from '*' with the side size entered from the keyboard. Let it be filled just below the main diagonal.

**Sample output on input 8:**
```
* * * * * * * *
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
```
Task 8 - Protons and electrons
------------

Given a number N, draw a square of N x N symbols on the screen, where below the main diagonal are <b>minuses (-)</b> and above the main diagonal are <b>pluses (+)</b>

Example:

Entrance: 4

Output:

```c++
++++
-+++
--++
---+
```

Entrance: 7

Output:

```c++
+++++++
-++++++
--+++++
---++++
----+++
-----++
------+
```

## Task 9 - Past days
(A more interesting task that can be solved with the material taken from week 2)
### Write a program that, given a date given by the user, calculates how many days have passed since the beginning of the year.

**Sample output on 22 10 2020:** 296

**Sample output on 22 10 2019:** 295

**Sample output on 7/18/2007:** 199

**Sample output on 3 2 2013:** 34