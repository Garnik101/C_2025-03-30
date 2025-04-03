#include <stdio.h> 

int main () {
	const int row = 4;
	const int col = 4;
	int arr[row][col];
	int sum;
	printf("Enter the values of the array.\n");
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			printf("Item [%d][%d]: ", i , j);
			scanf("%d", &arr[i][j]);
			printf("\n");
		}
	}
	
	for (int i = 0; i < col; ++i) {
		sum = 0; 
		for (int j = 0; j < col; ++j) {
			sum += arr[i][j];
		}
	printf("Sum of elements %d row is %d\n", i+1, sum);
	} 
	return 0;
}
