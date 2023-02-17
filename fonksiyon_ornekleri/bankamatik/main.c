#include <stdio.h>
#include <stdlib.h>

void bankamatik(int para)
{
    int yirmilik,onluk,beslik;
    if(para%5==0)
    {
        yirmilik=para/20;
        para-=yirmilik*20;
        onluk=para/10;
        para-=onluk*10;
        beslik=para/5;
        para-=beslik*5;
        printf("yirmilik=%d\n",yirmilik);
        printf("onluk=%d\n",onluk);
        printf("beslik=%d",beslik);
    }
    else
    {
        printf("paranız besin kati degil,verilemez.");
    }
}
int main()
{
    int miktar;
    printf("cekmek istediginiz para miktarini giriniz:");
    scanf("%d",&miktar);
    bankamatik(miktar);
    return 0;
}
