void matrixsum(){
    srand(time(0));
    const int nr = 5, nc = 5;
    int matrix[nr][nc];
    for (int i = 0; i<nr; i++){
        for (int j = 0; j<nc; j++){
//            printf("[%d][%d] : ", i, j);
//            scanf("%d", &matrix[i][j]);
            matrix[i][j]=rand();
        }
    }

    for (int i = 0; i<=nr; i++){
        if (i<nr){
            int line_sum = 0;
            for (int j = 0; j<=nc; j++){
                if (j<nc) {
                    printf("%d\t", matrix[i][j]);
                    line_sum+=matrix[i][j];
                    }
                else printf("%d", line_sum);
            }
        }
        else {
            for (int j = 0; j<nc; j++){
                int col_sum = 0;
                for (int k = 0; k<nr; k++){
                    col_sum += matrix[k][j];
                }
                printf("%d\t", col_sum);
            }
        }
        printf("\n");
    }
}
