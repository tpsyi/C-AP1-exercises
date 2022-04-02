#include <stdio.h>
// positive integer >00 -> prime or not

int prime(int number){
    if (!(number > 0)){
        printf("Not a positive integer..");
        return 0;
    }
    int result = 1, i = 0;
    for (i=2; i<number; i++){
        if (number % i == 0){
            result = 0;
        }
    }
    return result;
} //prob /2 is ok
