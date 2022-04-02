// 3 sides => type of triangle
#include <stdio.h>
void triangle_type_task(){
    printf("Enter 3 sides of a triangle : \n");
    float a, b, c;
//    printf("%f", pow(25,3));     /*Power function*/
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    int valid = 0, type = 0;
    if ( !(a >= b + c || b >= a + c || c >= a + b)){
        valid = 1;
    }
    if (a==b || b==c || a==c){
        type = 1;
        if (a==b && b==c){
            type = 2;
        }
    }
    if ( a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        type = 3;
    }
    if (valid) {
            printf("Triangle. ");
        switch(type){
            case 0:
                printf("Scalene triangle");
                break;
            case 1:
                printf("Isosceles");
                break;
            case 2:
                printf("Equilateral.");
                break;
            case 3:
                printf("Rectangular.");
                break;
        }
    return;
    }
}
