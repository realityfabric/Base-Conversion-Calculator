#include <string>
#include <cmath>
#include "converter.h"

qint64 base_conversion (qint64 input, qint64 inputbase, qint64 outputbase) {
		switch (inputbase) {
		case 10:
			return decimal2base (input, outputbase);
			break;
		default: 
			return decimal2base (base2decimal(input,inputbase), outputbase);
		}
}

qint64 decimal2base (qint64 input, double base) {
    qint64 output = 0, i;
	
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

qint64 base2decimal (qint64 input, double base) {
    qint64 output = 0, i;
	
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
