// listen for integers 0-100 depending on range of these digits print histogramm
/* 1 5 8 13 25 28 45 101
### #
# #
#







*/
void histogram()
{
    int arr[10] = {};
    int inp = 0, c = 0;
    do
    {
        scanf("%d", &inp);
        if (inp < 0 || inp > 100)
        {
            break;
        }
        else
        {
            arr[inp/10]++;
        }
    }
    while (5==5);
    for (int j=0; j<10; j++)
    {
        for (int i = 0; i<10; i++)
        {
            if (arr[i] > 0)
            {
                printf("#");
                arr[i]--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
