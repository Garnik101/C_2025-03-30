#include <stdio.h>

int main () {
	const int size = 10;
	int max = 0;
	int arr[size];
	printf("Enter the values of the array.\n");
	for (int i = 0; i < size; ++i) {
		printf("%2dth element of the array: ", i+1);
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];	
		}
	}
	printf("The largest element of the array is %d\n", max); 
	return 0;
}
