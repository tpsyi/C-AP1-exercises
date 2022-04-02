void matrot(){
    int nr, nc;
    printf("Enter number of rows (<10) : ");
    scanf("%d", &nr);
    printf("Enter number of columns (<10) : ");
    scanf("%d", &nc);
    if (nr > 10 || nc > 10){
        printf("no.");
        return;
    }
    int matrix[nr][nc];
    for (int i = 0; i<nr; i++){
        for (int j = 0; j<nc; j++){
            printf("[%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("____________________________\n");
    for (int i = 0; i<nr; i++){
        for (int j = 0; j<nc; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("____________________________\n");
    for (int j = 0; j<nc; j++){
        for (int i = 0; i<nr; i++){
            printf("%d\t", matrix[nr-i-1][j]);
        }
        printf("\n");
    }
    printf("____________________________\n");
    for (int j = 0; j<nc; j++){
        for (int i = 0; i<nr; i++){
            printf("%d\t", matrix[i][nc-j-1]);
        }
        printf("\n");
    }
    printf("____________________________\n");
    for (int i = 0; i<nr; i++){
        for (int j = 0; j<nc; j++){
            printf("%d\t", matrix[nr-i-1][nc-j-1]);
        }
        printf("\n");
    }
}
