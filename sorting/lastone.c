#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int last(int argc, char *argv[])
{
	int arr[10] = {5, 6, 1, 8, 2, 9, 3, 6, 8, 12};
	int temp = 0, min = 0, min_i = 0;
	for (int i = 0; i<sizeof(arr)/sizeof(int); i++){
		min = arr[i];
		min_i = i;
		for (int j = i; j<sizeof(arr)/sizeof(int); j++){
			if (arr[j] < min){
				min = arr[j];
				min_i = j;
			}
		}
		printf("%d [%d] <=> %d [%d]\n", arr[i], i, min, min_i);
		temp = arr[i];
		arr[i] = min;
		arr[min_i] = temp;

	printf("[");
	for (int i=0; i<sizeof(arr)/sizeof(int); i++){
		printf("%d\t", arr[i]);
	}
	printf("]\n");
	}

	for (int i=0; i<sizeof(arr)/sizeof(int); i++){
		printf("%d\t", arr[i]);
	}

}
