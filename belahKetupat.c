#include <stdio.h>
void main()
{
    int n, i,j;
    printf("Masukan bilangan bulat ganjil:");
    scanf("%d", &n);
    if (!(n % 2 == 0))
    {
        for (i = 1; i <= n/2+1; i++)
        {
            // printf("i =%d   ", i);
            for ( j = n/2+1; j >i ; j--)
            {
                printf(" ");
            }
            for (j = 1; j <=i*2-1 ;j++){
                printf("*");
            }
            printf("\n");
        }
        for (i = 1; i<=n/2; i++)
        {
            // printf("i =%d   ", i);
            for (j =0 ; j < i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <=n-i*2; j++)
            {
                printf("*");
                // printf("%d",n-1-i*2);
            }
            printf("\n");
        }
    }
}