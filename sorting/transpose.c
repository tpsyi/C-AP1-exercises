void transpose(){
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
    int transpose[nc][nr];
    for (int i = 0; i<nr; i++){
        for (int j = 0; j<nc; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i<nr; i++){
        for (int j = 0; j<nc; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("_____________\n");
    for (int i = 0; i<nc; i++){
        for (int j = 0; j<nr; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}
