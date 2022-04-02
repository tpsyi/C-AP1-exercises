#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int insertion(int argc, char *argv[])
{
	int arr[10] = {0, 6, 1, 5, 2, 7, 3, 4, 0, 12};
	int temp = 0;
	for (int i = 1; i<sizeof(arr)/sizeof(int); i++){
		int key = arr[i];
		for (int j = i-1; j>=0; j--){
			if (arr[j] > key){
                printf("%d [%d] <=> %d [%d]\n", arr[j], j, arr[j+1], j+1);
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			else {
				arr[j+1] = key;
				break;
			}
		}
	}

	for (int i=0; i<sizeof(arr)/sizeof(int); i++){
		printf("%d\n", arr[i]);
	}
}
