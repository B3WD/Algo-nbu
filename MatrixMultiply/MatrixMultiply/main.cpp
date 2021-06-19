#include <iostream>

void print2dArr(int arr[], int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cout << *(arr + (i * r) + j) << "\t";
		}
		std::cout << "\n";
	}
}

int main() {

	int ma[2][4] = { {3, 2, 1, 0}, 
		             {6, 3, 3, 0} };

	int mb[4][2] = { {2, 8}, 
		             {1, 6}, 
		             {12, 3}, 
		             {7, 1} };

	int mc[2][2] = { {0, 0}, 
		             {0, 0} };

	// cols A == rows B

	for (int k = 0; k < 2; k++) {  // to rows of A
		for (int j = 0; j < 2; j++) {  // to cols of B
			for (int i = 0; i < 4; i++) {  // to rows
				mc[k][j] += ma[k][i] * mb[i][j];
			}
		}
	}

	print2dArr((int*)mc, 2, 2);

	return 0;
}