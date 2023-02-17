#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("arasinda bosluk olacak sekilde iki sayi giriniz:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d>%d",a,b);
    }
    else if(b>a)
    {
        printf("%d>%d",b,a);
    }
    else
    {
        printf("%d=%d",a,b);
    }
    return 0;
}
