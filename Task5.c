#include <stdio.h>

int main () {
	const int size = 10;
	int arr[size];
	int max = 0;
	printf("Enter the values of the array.\n");
	for (int i = 0; i < size; ++i) {
		printf("%2dth element of the array: ", i+1);
		scanf("%d", &arr[i]);
	}

	int min = arr[0];
	for (int i = 0; i < size; ++i) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i]; 
		}
	}
	printf("The sum of the largest and smalest numbers of the array is: %d + %d = %d\n", max, min, max + min); 
	return 0;
}
