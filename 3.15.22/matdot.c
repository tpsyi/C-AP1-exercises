// dot product? for matrices? though i think that is not dot product...
void matdot(){
    const int SIZE = 3;
    float mat_1[3][3] = {{0, 1, 2}, {45, 7.4, 18}, {36.6, 27.3, 9.45}};
    float mat_2[3][3] = {{8.9, 23, 14}, {16.4, 27, 9.9}, {7, 15.4, 32.6}};
    printf("____________________________\n");
    for (int i = 0; i<SIZE; i++){
        for (int j = 0; j<SIZE; j++){
            printf("%f\t", mat_1[i][j]);
        }
        printf("\n");
    }
    printf("____________________________\n");
    for (int i = 0; i<SIZE; i++){
        for (int j = 0; j<SIZE; j++){
            printf("%f\t", mat_2[i][j]);
        }
        printf("\n");
    }
    float result = 0.0;
    for (int i = 0; i<SIZE; i++){
        for (int j = 0; j<SIZE; j++){
            result += mat_1[i][j] * mat_2[i][j];
        }
    }
    printf("SCALAR : %f", result);
}
