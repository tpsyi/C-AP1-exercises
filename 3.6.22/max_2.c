#include <stdio.h>
// Reads n numbers -> max of them and its index
void max_2() {
    int n = 0;
    printf("How many numbers :");
    scanf("%d", &n);
    int numbers[n], i;
    for (i=0; i<n; i++) {
        scanf("%d", &numbers[i]);
    }
    int max = numbers[0], max_i = 0;
    for (i=0; i<n; i++){
        if (numbers[i] > max) {
            max = numbers[i];
            max_i = i;
    }
    }
    printf("Out of the values you entered %d -th was the biggest with value of %d", max_i+1, max);
}
