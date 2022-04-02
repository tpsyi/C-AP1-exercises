void bingo(){
    int user_arr[6];
    printf("______________\nEnter 6 numbers :\n");
    readIArr(&user_arr, 6);
    printIArr(&user_arr, 6);
    printf("______________\nEnter joker : ");
    int win_arr[6], joker = readI();
    printf("______________\nEnter 6 numbers that are winning :\n");
    readIArr(&win_arr, 6);
    printIArr(&win_arr, 6);
    int win_c = 0, joker_c = 0;
    for (int i=0; i<6; i++){
        for (int j=0; j<6; j++){
            if (user_arr[i] == win_arr[j]){
                win_c++;
            }
        }
        if (user_arr[i]==joker){
            joker_c = 1;
        }
    }
    if (win_c > 2){
        printf("User has guessed %d numbers right! This is a win. ", win_c);
        if (win_c == 5 && joker_c==1){
            printf("Furthermore this is a joker win! (5+1)");
        }
    }
    else {
        printf("You guessed %d numbers right. Unfortunately you lose.", win_c);
    }
}
