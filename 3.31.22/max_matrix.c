//void printRow(int* mtx, int row_n, int row_size, int rev){
//    switch (rev){
//    case 0 : for (int j = 0; j < row_size; j++){printf("%d\t", *(mtx+row_n*row_size+j));}; break;
//    case 1 : for (int j = row_size-1; j >= 0; j--){printf("%d\t", *(mtx+row_n*row_size+j));}; break;
//    }
//}
//void printCol(int* mtx, int col_n, int row_size, int col_size, int rev){
//    switch (rev){
//    case 0 : for (int i = 0; i < col_size; i++){printf("%d\t", *(mtx+i*row_size+col_n));}; break;
//    case 1 : for (int i = col_size - 1; i >= 0; i--){printf("%d\t", *(mtx+i*row_size+col_n));}; break;
//    }
//}
// print matrix in order ->  \/ <- /\ and so on till we reach center.
// i use "cursor" and move it in those directions. c_r, c_c = position of cursor; r_n, c_n are dimensions of matrix; r_l, c_n are how many rows/columns cursor should move;
void max_matrix(){
    int r_n = 4, c_n = 3;
    int c_r = 0, c_c = -1, r_l = r_n, c_l = c_n;
    int mtx[r_n][c_n];
    for (int i = 0; i < r_n; i ++){
    for (int j = 0; j < c_n; j ++){printf("scanf[%d][%d]:", i, j);scanf("%d", &mtx[i][j]);}}
    printf("__________________________________\n");
    for (int i = 0; i < r_n; i ++){
    for (int j = 0; j < c_n; j ++){;printf("\t%d\t", mtx[i][j]);}printf("\n");}
    printf("__________________________________\n");
    while(5==5){
        printf("->");
        for (int i=0; i<c_l; i++){c_c++; printf("\t[%d;%d]%d\t", c_r, c_c, mtx[c_r][c_c]); }; r_l--;printf("\nnew_rl:%d\n", r_l);printf("\\/");
        if (r_l <= 0 || c_l <= 0){break;} // check if we are done
        for (int i=0; i<r_l; i++){c_r++; printf("\t[%d;%d]%d\t", c_r, c_c, mtx[c_r][c_c]); }; c_l--;printf("\nnew_cl:%d\n", c_l);printf("<-");
        if (r_l <= 0 || c_l <= 0){break;} // check if we are done
        for (int i=0; i<c_l; i++){c_c--; printf("\t[%d;%d]%d\t", c_r, c_c, mtx[c_r][c_c]); }; r_l--;printf("\nnew_rl:%d\n", r_l);printf("^");
        if (r_l <= 0 || c_l <= 0){break;} // check if we are done
        for (int i=0; i<r_l; i++){c_r--; printf("\t[%d;%d]%d\t", c_r, c_c, mtx[c_r][c_c]); }; c_l--;printf("\nnew_cl:%d\n", c_l);
        if (r_l <= 0 || c_l <= 0){break;} // check if we are done
    }
}
