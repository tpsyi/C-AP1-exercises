// count how much of each element is in array
void arr_search2(){
    const int size = 10;
    int arr[size];
    int count[size];
    for(int i = 0; i<size; i++){
        printf("%d : ", i);
        scanf("%d", &arr[i]);
        count[i]=1;
    }
    // MY WAY
//    for (int i = 0; i<size; i++){
//        int c = i;
//        for (int j = 0; j<size; j++){
//            if (j != i && arr[c]==arr[j]){
//                count[j]+=count[c];count[c]=0;c=j;
//            }
//        }
//    }
    // MY WAY n2
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            if (j != i && arr[i]==arr[j] && arr[i]!=0){
                count[i]+=count[j];count[j]=0;
            }
        }
    }

    for (int i = 0; i<size; i++){
        if (count[i]==0){continue;}
        printf("Value %d occurs %d times.\n", arr[i], count[i]);
    }
}
