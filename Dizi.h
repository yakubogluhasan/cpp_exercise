#include <iostream>
class Dizi
{
private:
	int rowSize, columnSize;
	int dizi[10][10];

public:
	// Constructor
	Dizi() {
		rowSize = 0;
		columnSize = 0;
		std::cout << "Dizi object is created." << std::endl;
	}

	// Destructor
	~Dizi() {
		std::cout << "Dizi object is destroyed." << std::endl;
	}

	void setArray() {
		std::cout << "Enter the row size of the array: ";
		std::cin >> rowSize;

		std::cout << "Enter the column size of the array: ";
		std::cin >> columnSize;

		for (int j = 0; j < columnSize; j++) {
			for (int i = 0; i < rowSize; i++) {
				std::cout << "Enter the " << i + 1 << ". element of the " << j + 1 << ". column: ";
				std::cin >> dizi[i][j];
			}
		}
	}

	void printArray() {
		for (int i = 0; i < rowSize; i++) {
			for (int j = 0; j < columnSize; j++) {
				std::cout << dizi[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
};