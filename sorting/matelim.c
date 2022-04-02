void matelim(){
    int nr, nc;
    printf("Enter number of rows (<20) : ");
    scanf("%d", &nr);
    printf("Enter number of columns (<20) : ");
    scanf("%d", &nc);
    if (nr > 20 || nc > 20){
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
    //print original matrix
    printf("____________________________\n");
    for (int i = 0; i<nr; i++){
        for (int j = 0; j<nc; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // ask for N
    printf("____________________________\n");
    int N=0;
    printf("Enter N : ");
    scanf("%d", &N);
    // print submatrices found by eliminating N's row and column
    for (int i = 0; i<nr; i++){
        for (int j = 0; j<nc; j++){
            // for every N in matrix
            if (matrix[i][j] == N){
                printf("[%d, %d]\n", i, j);
                // generate sub-matrix
                int matelim[nr-1][nc-1];
                    for (int ie = 0; ie<nr-1; ie++){
                        for (int je = 0; je<nc-1; je++){
                            int a = ie, b = je;
                            if ( ie >= i){
                                a++;
                            }
                            if (je >= j){
                                b++;
                            }
                            matelim[ie][je] = matrix[a][b];
                    }
                }
                // print it out
                for (int i = 0; i<nr-1; i++){
                    for (int j = 0; j<nc-1; j++){
                        printf("%d\t", matelim[i][j]);
                    }
                    printf("\n");
                }
            }


        }
    }
}
