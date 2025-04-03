#include <stdio.h>

int main () {
	const int row = 4;
	const int col = 4;
	int arr[row][col];
	int sum = 0;
	printf("Enter the values of the array.\n");
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			printf("Item [%d][%d]: ", i , j);
			scanf("%d", &arr[i][j]);
			printf("\n");
		}
	}
	
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (i == j ) {
				sum += arr[i][j];
			}
		}
	} 
	printf("The sum of the elements on the main diagonal is %d\n", sum);
	return 0;
}
