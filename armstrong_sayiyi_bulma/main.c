#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int kalan;
    int toplam=0;
    int armstrong;

    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    armstrong=sayi;

    while(sayi>0)
    {
        kalan=sayi%10;
        sayi=sayi-kalan;
        sayi=sayi/10;
        kalan=kalan*kalan*kalan;
        toplam=toplam+kalan;
    }

    if(armstrong==toplam)
    {
        printf("girdiginiz sayi bir armstrong sayidir.\n");
    }
    else
    {
        printf("girdiginiz sayi bir armstrong sayi degildir.");
    }
    return 0;
}
