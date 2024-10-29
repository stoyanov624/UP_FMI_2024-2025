    // Cycles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    /*int day = 31;
    int month = 12;
    int year = 2023;

    int sumOfDays = day;
    switch (month - 1) {
        case 12: sumOfDays+= 31;
        case 11: sumOfDays+= 30;
        case 10: sumOfDays+= 31;
        case 9: sumOfDays+= 30;
        case 8: sumOfDays+= 31;
        case 7: sumOfDays+= 31;
        case 6: sumOfDays+= 30;
        case 5: sumOfDays+= 31;
        case 4: sumOfDays+= 30;
        case 3: sumOfDays+= 31;
        case 2: sumOfDays+= 28;
        case 1: sumOfDays+= 31;
    }

    std::cout << sumOfDays;*/

    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = n - 1 - i; j > 0; j--)
        {
            std::cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "$";
        }
        std::cout << std::endl;

    }
    std::cout << std::endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "$";
        }
        std::cout << std::endl;

    }
}
