#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=1;
    int i,sayi;
    printf("faktoriyeli alinacak sayiyi giriniz:");
    scanf("%d",&sayi);
    i=sayi;
    while(i>0)
    {
        printf("%d\n",i);
        fact=fact*i;
        i--;
    }
    printf("girdiginiz sayinin faktoriyeli=%d",fact);

    return 0;
}
