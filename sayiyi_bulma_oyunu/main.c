#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int sayi=(rand()%100);
    int hak=5;
    int tahmin;

    for(hak=0;hak<5;hak++)
    {
        printf("bir sayi giriniz:");
        scanf("%d",&tahmin);
        if(tahmin==sayi)
        {
           printf("tebrikler,kazandiniz.");
           break;
        }
        if(tahmin<sayi)
        {
            printf("daha buyuk bir sayi giriniz:");
        }
        if(tahmin>sayi)
        {
            printf("daha kucuk bir sayi giriniz:");
        }
        if(hak==5)
        {
            printf("hakkiniz bitti.sayi=%d",sayi);
        }
    }
    return 0;
}
