// Enter n numbers print even numbers :.... odd numbers : .....
void arr_odd_even(){
    const int N = 10;
    int v[N];
    printf("Enter numbers : ");
    for (int i = 0; i<N; i++){
            scanf("%d", &v[i]);
    }
    printf("EVEN NUMBERS : ");
    for (int i = 0; i<N; i++){
        if (v[i] % 2 == 0){
            printf("\t%d", v[i]);
        }
    }
    printf("\nODD NUMBERS : ");
    for (int i = 0; i<N; i++){
        if (v[i] % 2 == 1){
            printf("\t%d", v[i]);
        }
    }
}
