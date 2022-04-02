//purge the enemies of the array remove floats == 'enemy' from the array and shift other elements to fill in the spacex
void readFArr(int size, float* nArr){
    float inp = 0;
    for (int i = 0; i<size; i++){
        scanf("%f", &inp);
        nArr[i] = inp;
    }
}

void printFArr(int size, float* nArr){
    printf("[");
    for (int i = 0; i<size; i++){
        printf("%f\t", *(nArr+i));
    }
    printf("]\n");
}
void printIArr(int size, int* nArr){
    printf("[");
    for (int i = 0; i<size; i++){
        printf("%i\t", *(nArr+i));
    }
    printf("]\n");
}


int purge(float* Arr, int size, float enemy, int* purged){
    int shift = 0;
    for (int i=0; i<size; i+=1){
        if (Arr[i] == enemy){
            shift++;
            *purged += 1;
        }
        else { Arr[i-shift] = Arr[i]; }
    }
}

//int count_nz(float* Arr, int size){
//    int result = 0;
//    for (int i=0; i<size; i++){
//        if (Arr[i] == 0){
//            result++;
//        }
//    }
//    return result;
//}
