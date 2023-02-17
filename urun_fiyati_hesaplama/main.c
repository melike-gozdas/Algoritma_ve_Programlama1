#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fiyat;
    double indirim;
    double sonuc;
    printf("urunun fiyatini giriniz:");
    scanf("%d",&fiyat);

    if(0<fiyat && fiyat<100)
    {
        indirim=fiyat*0.10;
        sonuc=fiyat-indirim;
        printf("%.2lf",sonuc);
    }
    if(100<fiyat && fiyat<300)
    {
        indirim=fiyat*0.15;
        sonuc=fiyat-indirim;
        printf("%.2lf",sonuc);
    }
     if(300<fiyat && fiyat<500)
    {
        indirim=fiyat*0.20;
        sonuc=fiyat-indirim;
        printf("%.2lf",sonuc);
    }

    if(500<fiyat && fiyat<1000)
    {
        indirim=fiyat*0.30;
        sonuc=fiyat-indirim;
        printf("%.2lf",sonuc);
    }
    else
    {
        indirim=fiyat*0.40;
        sonuc=fiyat-indirim;
        printf("%.2lf",sonuc);
    }

    return 0;
}
