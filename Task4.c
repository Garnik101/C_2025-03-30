#include <stdio.h>

int main () {
	const int size = 10;
	int arr[size];
	printf("Enter the values of the array.\n");
	for (int i = 0; i < size; ++i) {
		printf("%2dth element of the array: ", i+1);
		scanf("%d", &arr[i]);
	}

	int min = arr[0];
	int min_index = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] < min) {
			min = arr[i];
			min_index = i;
		}
	}
	printf("Index of the smallest element of the array is %d\n", min_index); 
	return 0;
}
