#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i;
    int kalan=0;
    int sayac=0;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    for(i=0;i=sayi;i++)
    {
        kalan=kalan+sayi%10;
        sayi=sayi-kalan;
        sayi=sayi/10;
        sayac++;
        kalan=0;
    }
    printf("%d",sayac);
    return 0;
}
