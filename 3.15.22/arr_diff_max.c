// compare i'th element of v and w write down the biggest difference.
void arr_diff_max(){
    int v[10] = {5, 1, 7, 9, 11, 13, 2, 17, 19, 21};
    int w[10] = {3, 33, -4, 5, 6, 0, 1, 1, 19, 17};
    int diff_arr[10];
    int max_diff_i = 0;
    for (int i = 0; i<10; i++){
        diff_arr[i] = v[i] - w[i];
        if (diff_arr[i] < 0) diff_arr[i] *= -1;
        if (diff_arr[i] > diff_arr[max_diff_i]) max_diff_i = i;
    }
    printf("max diff is %d; between %d and %d; at index %d", diff_arr[max_diff_i], v[max_diff_i], w[max_diff_i] ,max_diff_i);
}
