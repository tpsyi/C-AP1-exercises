// i think this might be wrong but oh well.
//cat starts with 13 mice, one is white, he eats them one by one by skipping 12 mice and eating 13th, from which mouse he should start to eat the white mouse last.

#define SIZE 13
void pur(){
    int mice[SIZE] = {1,1,1,1,1,1,1,1,1,1,1,1, 1};
    int mice_c[SIZE] = {1,1,1,1,1,1,1,1,1,1,1,1, 1};
    int w = -1;
    printf("Enter w : "); w = readI();
    //+13%13--   + 12 - 13     9 10 12 2 6 1 11 13 5 7 8 3 4 i see no way without looping through 1000000 times.................
    //+1 +2 +3 +4 +5 +6 --> 12 skipping itterated ||
    for (int i = 0; i<SIZE; i++){
        copy_arrayI(&mice_c, mice, SIZE);
        printf("CHECKING i = %d \n", i);
        int new_ind = i;
        for (int c = 0; c<SIZE; c++){
            for(int k = 0; k<c; k++){
                new_ind++; new_ind %= SIZE;
                if (mice_c[new_ind]==0){while(mice_c[new_ind]==0){printf("[%d]", new_ind);new_ind++; new_ind %= SIZE;}}
            }
            printf("checking new_ind = %d \n", new_ind);
            if (mice_c[new_ind]==1 && new_ind == w && c == SIZE-1){printf("\n%d IS A WINNENRERERERERER.\n\n", i); break;}
            if (mice_c[new_ind]==1 && new_ind == w && c != SIZE-1){printf("disqualified due to NOT LAST\n"); break;}
            mice_c[new_ind]=0;
        }

    }
}
