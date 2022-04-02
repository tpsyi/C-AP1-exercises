// operator, number, number => "calculation" + result
#include <stdio.h>
void prefix_calc(){
    printf("Enter an operator sign, first number, second number : \n");
    char prefix;
    float arg_1, arg_2;
    float result;
    scanf("%c", &prefix);
    scanf("%f", &arg_1);
    scanf("%f", &arg_2);
    switch (prefix){
        case '+':
            result = arg_1 + arg_2;
            break;
        case '-':
            result = arg_1 - arg_2;
            break;
        case '*':
            result = arg_1 * arg_2;
            break;
        case '/':
            result = arg_1 / arg_2;
            break;
        default:
            printf("Unrecognized operation");
            return;
    }
    printf("%f %c %f = %f", arg_1, prefix, arg_2, result);
}
