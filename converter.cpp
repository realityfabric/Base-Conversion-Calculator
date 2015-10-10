#include <iostream>
#include <string>
#include <cmath>
#include "converter.h"

int base_conversion (int input, int inputbase, int outputbase) {
		switch (inputbase) {
		case 10:
			return decimal2base (input, outputbase);
			break;
		default: 
			return decimal2base (base2decimal(input,inputbase), outputbase);
		}
}

int decimal2base (int input, double base) {
	int output = 0, i;
	
	while (input != 0) {
		i = 0;
		while (input - pow(base,i + 1) >= 0) {
			i++;
		}

		output += pow(10.0,i);
		input -= pow(base,i);
	}

	return output;
}

int base2decimal (int input, double base) {
	int output = 0, i;
	
	while (input != 0) {
		i = 0;
		while (input - pow(10.0,i + 1) >= 0) {
			i++;
		}

		output += pow(base,i);
		input -= pow(10.0,i);
	}

	return output;
}
