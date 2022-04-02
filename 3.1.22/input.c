// input char => capital/small/digit/none also print counterpart
void input_task(){
    char c;
    const int up_low_diff = 'A' - 'a';
    scanf("%c", &c);
    if (c >= '0' && c <= '9'){
        printf("%c is a number. ", c);
        return;
    }
    if (c >= 'A' && c <= 'z'){
        printf("%c is a letter. ", c);
    }
    if (c >= 'a' && c <= 'z'){
        printf("%c is lowercase. ", c);
        printf("%c's Uppercase counterpart is %c. ", c, c+up_low_diff);
        return;
    }
    if (c >= 'A' && c <= 'Z'){
        printf("%c is uppercase. ", c);
        printf("%c's Uppercase counterpart is %c. ", c, c-up_low_diff);
        return;
    }
}
