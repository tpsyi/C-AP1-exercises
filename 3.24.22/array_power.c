int powerI(int base, int exp){
    if (exp < 0){printf("!!!Negative power");}
    if (exp = 0 && base != 0){return 1;}
    int factor = base;
    printf("%d", exp);
    for (int c = 0; c < exp; c++){
        base *= factor;
        printf("!");
    }
    return base;
}

void array_power(){
    int base[10], exps[10], res[10];
    printf("Enter base array : ");
    readIArr(&base, 10);
    printf("Enter exp array : ");
    readIArr(&exps, 10);
    printIArr(&base, 10);
    printIArr(&exps, 10);
    for (int i = 0; i < 10; i++){
        res[i] = powerI(base[i], exps[i]);
        printf("%d", res[i]);
    }
    printIArr(&res, 10);
}
