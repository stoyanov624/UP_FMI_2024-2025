# Tasks - Week 7

In the following tasks, by creating an array with n elements, where n is a number entered by the user, we will understand the preliminary creation of an array with a sufficient number of elements, then reading the number and further in the program using the first n elements of the already created array, if n <= the actual size of the already created array.

If n > the actual size of the already created array, we terminate the execution of the program or continue reading the entered number until the number satisfies our requirements, that is, it is less than or equal to the size of the created array.

<b>For this purpose, we will create functions for filling and printing an array, which we can use to test each of our tasks.</b>

## Task 0
### After entering an integer n, initialize an array of n integers, as the user enters n numbers. Then, traverse the array and display all numbers in the console. Then iterate over the array again and calculate the arithmetic mean of the numbers. (This can also be done with an array of real numbers).

**Sample output for input 3 2 2 2:** [2,2,2] 2

**Sample output for input 4 3 10 10 3:** [4,3,10,10,3] 6.5

**Sample output for input 5 0 0 0 0 0:** [0,0,0,0,0] 0

## Task 1 - Reverse
### Enter an array of n elements, print its elements in reverse!

**Sample output for input 4 5 6 3:** 3 6 5 4

**Sample output for input 1:** 1

## Task 2 - Min, Max, Second Max, Second Min
### Enter an array of n elements. To print the largest and smallest element in the array to the console. To also print the second largest element and the second smallest element.

**Sample output for input 1 2 3 4 5:** Min 1, Max 5, Second Min 2, Second Max 4

**Sample output for input 45 34 12 37 5:** Min 5, Max 45, Second Min 2, Second Max 4

## Task 3 - Duplicates
### Enter an array of n elements and a positive integer. To print the number of times this number appears in the array to the console. Also, to print the positions at which we encountered it during the traversal.

**Sample output for input 1 3 3 3 5 3:** 3 Positions are : 1 2 3

**Sample output for input 1 2 3 4 5 50:** 0 Number isn't in this array

## Task 4 - Mirror array
### Enter an array of n elements and a positive integer. Check if an array is mirrored to its middle.

**Sample output for input 1 2 3 2 1:** YES

**Sample output for input 1 0 0 0 0 1:** YES

**Sample output for input 1 45 33 1:** NO

## Task 5 - Traicho and interesting numbers

Traicho came across a list of numbers. Now he wonders how many of them are interesting to him. Traicho considers a number interesting if its digits are in non-decreasing order. Write a program that checks whether a given list of non-negative numbers is interesting. **First read all the numbers and then print the answer for each.**

**Input:** The first line will contain a single number N <= 1000 - the number of numbers from Traicho's list. This is followed by N lines with one number each - the numbers from Traicho's list.

**Output:** N lines should be printed, each with YES or NO: each line indicates whether the corresponding number from the list is interesting.

**Example:**

Input:

5
123
1111
15678
341
0

Output:

YES
YES
YES
NO
YES