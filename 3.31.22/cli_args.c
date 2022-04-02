void cli_args(char* argv[]){
    int a, b;
    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);
    for (int i = 0; i<a; i++){
        if (i%b == 0) printf("%d\t", i);
    }
}
