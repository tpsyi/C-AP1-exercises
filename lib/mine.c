int readI(){int r = -1;scanf("%d", &r);return r;}
int readF(){int r = -1;scanf("%f", &r);return r;}
void readIArr(int* pArr, int size){int inp = -1;for(int i = 0; i<size; i++){scanf("%d", &inp);pArr[i] = inp;}}
void readFArr(float* pArr, int size){float inp = -1;for(int i = 0; i<size; i++){scanf("%f", &inp);pArr[i] = inp;}}
void printIArr(int* pArr, int size){int inp = -1;for(int i = 0; i<size; i++){printf("%d\t", pArr[i]);}printf("\n");}
void printFArr(float* pArr, int size){float inp = -1;for(int i = 0; i<size; i++){printf("%3f", pArr[i]);}printf("\n");}
//void find_block(char bigstring[], char begin_ch, char end_ch, int* result[1]){
////    printf("%s", bigstring);
////    printf("%c\n", begin_ch);
////    printf("%c\n", end_ch);
//    printf("\n%s", strrchr(strchr(bigstring, begin_ch), end_ch)); //not quite what i want since this thing just cuts to the right. i need to cut string to the left
//    // no idea
//    printf("\n%s", strchr(bigstring, begin_ch));
////    printf("%s", strrchr(bigstring, end_ch));
//    *result[0] = strchr(bigstring, begin_ch);
//    *result[1] = strrchr(bigstring, end_ch);
//}
void copy_arrayI(int* p_dest_arr, int* p_src_arr, int size){
    for (int i = 0; i<size; i++){
        *(p_dest_arr+i) = *(p_src_arr+i);
//        printf("\n%d->%d, %d=>%d!!!", i, i, *(p_dest_arr+i), *(p_src_arr+i));
}

};
