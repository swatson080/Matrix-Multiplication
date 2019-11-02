#include <iostream>

int main() {

	/*
	int numRowsA = 2;
	int numColsA = 2;

	int numRowsB = 2;
	int numColsB = 3;

	int A[numRowsA][numColsA] = {
		{2,-1},
		{0,4}
	};

	int B[numRowsB][numColsB] = {
		{5,1,2},
		{-1,0,3}
	};
	*/
	int numRowsA = 3;
	int numColsA = 3;

	int numRowsB = 3;
	int numColsB = 2;

	int A[numRowsA][numColsA] = {
		{0,1,-2},
		{1,0,3},
		{-1,5,2}
	};

	int B[numRowsB][numColsB] = {
		{1,0},
		{0,3},
		{-2,5}
	};

	int product[numRowsA][numColsB] = {0};

	int colA = 0, entry = 0;

	for(int i = 0; i < numRowsA; ++i) {
		for(int j = 0; j < numColsB; ++j) {
			colA = 0;
			entry = 0;
			for(int k = 0; k < numRowsB; ++k) {
				entry += A[i][colA] * B[k][j];
				++colA;
				if(k == numRowsB-1) {
				product[i][j] = entry;
				}
			}
		}
	}


	for(int i = 0; i < numRowsA; ++i) {
		for(int j = 0; j < numColsB; ++j) {
			std:: cout << product[i][j] << " ";
			if(j == numColsB-1) {
				std::cout << std::endl;
			}
		}
	}

	return 0;

}
