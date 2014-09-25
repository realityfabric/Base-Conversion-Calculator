//Program written 4/5/2013

#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int base_conversion (int input, int inputbase, int outputbase);
int decimal2base (int input, int base);
int base2decimal (int input, int base);

int main (void){
	long long int input, inputbase, outputbase;
	char y = 'y';
	cout << "Base Conversion:" << endl;

	do {
		cout << "Input base of number to be converted: ";
		cin >> inputbase;
		while (inputbase <= 1) {
			cout << "Number must be larger than 1: ";
			cin >> inputbase;
		}
		cout << "Please input base to convert to: ";
		cin >> outputbase;
		while (outputbase <= 1) {
			cout << "Number must be larger than 1: ";
			cin >> outputbase;
		}

		cout << "Please input an integer to convert: ";
		cin >> input;
		while (input < 0) {
			cout << "Number must be larger than 0: ";
			cin >> input;
		}

		cout << input << " base " << inputbase << " in base " << outputbase << " is " << base_conversion (input, inputbase, outputbase) << endl;

		cout << "Continue? (y/n) ";
		cin >> y;
		cout << endl;
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
