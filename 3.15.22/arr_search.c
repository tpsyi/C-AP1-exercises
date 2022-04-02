//input array then value then count how many times it occurs inside the array
void arr_search(){
    int size = 0;
    printf("How big of an array (<100) : ");
    scanf("%d", &size);
    if (size > 100) {printf("no."); return;}
    int arr[1000];
    for(int i = 0; i<size; i++){
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }
    int search_val = 0, cont_bool = 0;
    while(5==5){
        printf("\nType number to search : ");
        scanf("%d", &search_val);
        int c = 0;
        for(int i = 0; i<size; i++){
            if (arr[i] == search_val){c++;}
        }
        printf("Value %d occurs %d times.", search_val, c);
        printf("\nContinue?(0-no, 1-yes) : ");
        scanf("%d", &cont_bool);
        if (cont_bool == 0){
            break;
        }
    }
}


///////   4 5 6 3 4 5 7 8 8

//////    0 0 0 2 1 1 0 0
