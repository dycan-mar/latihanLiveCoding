#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Masukan bilangan 3 bulat (a b c):");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {

        if (a == b && b == c)
            printf("Segitiga Sama Sisi");
        else if (a == b || a == c || b == c)
            printf("Segitiga Sama Kaki");
        else if (a * a + b * b == c * c)
            printf("Segitiga Siku-Siku");
        else
            printf("Segitiga Sembarang");
    }else
        printf("Bukan segitiga");
}