#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int bubble(int argc, char *argv[])
{
	srand(time(0));
	int arr[100];
	for (int i=0; i<100; i++){
		arr[i] = rand();
	}
//	int arr[10] = {5, 6, 1, 8, 2, 9, 3, 6, 8, 12};
	printf("!!%d!!", sizeof(arr)/sizeof(int));
	int temp = 0, swapped = 0;
	do {
		swapped = 0;
		printf("!!itteration!!\n");
		for (int i=0; i<sizeof(arr)/sizeof(int)-1; i++){
			if (arr[i] > arr[i+1]) {
					temp = arr[i];
					printf("Swapped %d(%d) and %d(%d)\n", arr[i], i, arr[i+1], i+1);
					arr[i] = arr[i+1];
					arr[i+1] = temp;
					swapped = 1;
				}
		}
	}
	while (swapped == 1);
		for (int i=0; i<sizeof(arr)/sizeof(int); i++){
		printf("%d\n", arr[i]);
	}
}
