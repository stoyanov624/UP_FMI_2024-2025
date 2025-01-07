#include <iostream>

long convert(unsigned long number, unsigned short int k, unsigned short int r) { 

	unsigned long reverseAnswer = 0;
	
	while (number != 0) { 
		reverseAnswer  = reverseAnswer * 10 + number % r;
		number /= k;
	}
	
	unsigned long answer = 0;
	
	while (reverseAnswer  != 0) { 
		answer = answer * 10 + reverseAnswer % 10;
		reverseAnswer /= r;
	}
	
 return answer;

} 

int main() { 

	unsigned long number;
	
	unsigned short int k;
	unsigned short int r;
	
	do { 
		std::cin >> number;
	} while(number < 0);
	
	do { 
	 std::cin >> k >> r;
	} while( r < 2 || r > 10);
	
	std::cout << convert(number, k ,r);
  return 0;
}