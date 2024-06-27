#include <iostream>
class Faktoriyel {

private:
	int number = 0;

public:

	void getNumber() {

		std::cout << "Enter the number: ";
		std::cin >> number;
	}
	int faktoriyel() {

		int factor = 1;
		for (int i = number; number > 0; number--) {

			factor = factor * number;

		}
		return factor;
	}
	void printFactor() {
		int factor = faktoriyel();
		std::cout << "The answer is: " << factor << std::endl;

	}
};