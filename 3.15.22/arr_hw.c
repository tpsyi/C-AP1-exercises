// read n numbers -> positive : .... negative : .....
void arr_hw(){
    const int N = 10;
    int v[N], p[N], n[N], c_p=0, c_n=0;
    printf("Enter numbers : ");
    for (int i = 0; i<N; i++){
        scanf("%d", &v[i]);
        if (v[i] > 0){p[c_p] = v[i];c_p++;}
        if (v[i] < 0){n[c_n] = v[i];c_n++;}
    }
    printf("POSITIVE NUMBERS : ");
    for (int i = 0; i<c_p; i++){
        printf("%d\t", p[i]);
    }
    printf("\nNEGATIVE NUMBERS : ");
    for (int i = 0; i<c_n; i++){
        printf("%d\t", n[i]);
    }
}

