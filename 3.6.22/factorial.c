#include <stdio.h>
// Read nonnegative integer -> factorial
int fac(int number){
    int result=1;
    int i;
    for (i=number; i>0; i--){
        result *= i;
    }
    return result;
}
