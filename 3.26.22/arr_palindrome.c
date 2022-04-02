#define SIZE 9
void palindrome(){
    int arr[SIZE] = {};
    printf("Enter an array containing %d elements : ", SIZE);
    readIArr(&arr, SIZE);
    int is_palindrome = 1;
    for (int i = 0; i<SIZE/2; i++){
        if (arr[i]!=arr[SIZE-i-1]){is_palindrome = 0;}
    }
    switch (is_palindrome){
    case 0:
        printf("This array is not a palindrome..."); break;
    case 1:
        printf("This array is a palindrome... YAY"); break;
    }
}
