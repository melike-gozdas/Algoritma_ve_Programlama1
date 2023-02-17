#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("bir sayi giriniz:");
    scanf("%d",&a);
    printf("bir sayi giriniz:");
    scanf("%d",&b);
    printf("bir sayi giriniz:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("en buyuk sayi= %d",a);
    }
    if(b>a && b>c)
    {
        printf("en buyuk sayi= %d",b);
    }
    if(c>a && c>b)
    {
        printf("en buyuk sayi= %d",c);
    }
    return 0;
}
