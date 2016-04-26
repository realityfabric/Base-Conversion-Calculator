#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}

/*
#include <iostream>
#include <string>
#include <cmath>
#include "converter.h"

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
*/
