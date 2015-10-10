#include <iostream>
#include <string>
#include <cmath>

int base_conversion (int input, int inputbase, int outputbase);
int decimal2base (int input, int base);
int base2decimal (int input, int base);

int main (void){
	long long int input, inputbase, outputbase;
	char y = 'y';
	std::cout << "Base Conversion:" << std::endl;

	do {
		std::cout << "Input base of number to be converted: ";
		std::cin >> inputbase;
		while (inputbase <= 1) {
			std::cout << "Number must be larger than 1: ";
			std::cin >> inputbase;
		}
		std::cout << "Please input base to convert to: ";
		std::cin >> outputbase;
		while (outputbase <= 1) {
			std::cout << "Number must be larger than 1: ";
			std::cin >> outputbase;
		}

		std::cout << "Please input an integer to convert: ";
		std::cin >> input;
		while (input < 0) {
			std::cout << "Number must be larger than 0: ";
			std::cin >> input;
		}

		std::cout << input << " base " << inputbase << " in base " << outputbase << " is " << base_conversion (input, inputbase, outputbase) << std::endl;

		std::cout << "Continue? (y/n) ";
		std::cin >> y;
		std::cout << std::endl;
	} while (y == 'y');

	return 0;
}

int base_conversion (int input, int inputbase, int outputbase) {
		switch (inputbase) {
		case 10:
			return decimal2base (input, outputbase);
			break;
		default: 
			return decimal2base (base2decimal(input,inputbase), outputbase);
		}
}

int decimal2base (int input, int base) {
	int output = 0, i;
	
	while (input != 0) {
		i = 0;
		while (input - pow((double) base,i + 1) >= 0) {
			i++;
		}

		output += pow(10.0,i);
		input -= pow((double) base,i);
	}

	return output;
}

int base2decimal (int input, int base) {
	int output = 0, i;
	
	while (input != 0) {
		i = 0;
		while (input - pow(10.0,i + 1) >= 0) {
			i++;
		}

		output += pow((double) base,i);
		input -= pow(10.0,i);
	}

	return output;
}
