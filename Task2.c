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
	for (int i = 0; i < size; ++i) {
		if (arr[i] < min) {
			min = arr[i]; 
		}
	}
	printf("The smallest element of the array is %d\n", min); 
	return 0;
}
