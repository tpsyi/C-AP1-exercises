// input 3 numbers => max, which one
#include <stdio.h>

void max_task(){
    float inp[3];
    scanf("%f", &inp[0]);
    scanf("%f", &inp[1]);
    scanf("%f", &inp[2]);
    float max = inp[0]; int index = 0;
    for (int i = 0; i<sizeof(inp)/sizeof(float); i++){
        if (inp[i] >= max) {
            max = inp[i];
            index = i;
        }
    }
    printf("%f is the biggest number, it's index is %d (%d'th number you entered.)", max, index, index+1);
}
