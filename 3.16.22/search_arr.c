void search_arr(){
    int arr1[10] = {1, 2, 6, 8, 4, 8, 4, 8, 4, 8}, arr2[3] = {8, 4, 8};
//    int arr1[10] = {1, 2, 6, 4, 4, 4, 4, 8, 4, 3}, arr2[2] = {4, 4};
    int arr_s = sizeof(arr1)/sizeof(int);
    int search_s = sizeof(arr2)/sizeof(int);
    printIArr(arr_s, arr1);
    printIArr(search_s, arr2);
//    // this is non overlapping search
    int match = 0, from = 0;
    for (int i = 0; i<arr_s; i++){
        if (arr1[i]==arr2[match]){
            if (match == 0) from = i;
            match++;
            if (match == search_s) printf("Match from %d\n", from);
        }
        else match = 0;
    }

//    //this is overlapping search but also this might be broken, ehh. I hope im not itterating through random memory
//    for (int i = 0; i<arr_s; i++){
//        if (arr1[i]==arr2[0]){
//        int match = 0, from = 0;
//        for (int j = i; j<arr_s; j++) {
//        if (arr1[j]==arr2[match]){
//            if (match == 0) from = j;
//            match++;
//            if (match == search_s) printf("Match from %d\n", from);
//        }
//        else match = 0;
//        }
//        }
//    }
}

