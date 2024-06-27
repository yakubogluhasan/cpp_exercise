
#include <iostream>

class Sinav {

private:

	int number = 0;

public:

	void getNumber() {
		std::cout << "Enter the number: ";
		std::cin >> number;
	}

	void printFigure() {


		for (int j = 1; j <= number; j++) {

			int figure = j;
			for (int i = j; i > 0; i--) {

				std::cout << figure;

			}
			std::cout << std::endl;
		}
	}
};
