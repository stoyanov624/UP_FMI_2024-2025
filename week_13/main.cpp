#include <iostream>

using namespace std; 


int pow(int a, int n)
{
	int newNumber = 1; 
	while(n != 0)
	{
		newNumber = newNumber * a;
		n--;
	}
	return newNumber; 
}


unsigned long long  reverceInDecimal(unsigned long number, unsigned int k)
{
	
	unsigned long long newNumber = 0; 
	for(int i  = 0; number != 0; i++)
	{
		newNumber += (number % 10) * pow(k, i);
		number /= 10; 
	}
	return newNumber;
	
}


void changeNumber(unsigned long long number, unsigned int k, unsigned int r)
{
	number = reverceInDecimal(number, k);
	int newNumber[256];
	int newNumberDigits = 0;
	while(number != 0)
	{
		newNumber[newNumberDigits] = number % r; 
		number/=r;
		newNumberDigits++;
	}
	
	while(newNumberDigits >= 0)
	{
		cout << newNumber[newNumberDigits];
		newNumberDigits--;
	}

}


int main()
{
	unsigned long long number; 
	unsigned int k;
	unsigned int r;
	
	
	cout << "Enter a number: ";
	cin >> number; 
	
	cout << endl << "Enter k: ";
	cin >> k; 
	cout << endl <<  "Enter r: "; 
	cin >> r;
	
	changeNumber(number, k, r);
	
}