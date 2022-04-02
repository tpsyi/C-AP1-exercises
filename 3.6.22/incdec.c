#include <stdio.h>
// reads +, -, * -> increments/decrements or terminates function
void incdec(){
    int value = 0;
    printf("+ to increment, - to decrement, * to terminate:");
    char inp = 'a';
    while (5==5){
        scanf("%c", &inp);
        switch (inp){
            case '*':
                return;
            case '+':
                value++;
                printf("%d\n", value);
                break;
            case '-':
                value--;
                printf("%d\n", value);
                break;
        }
    }
}
