#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*p,toplam=0;
    double ort;
    printf("dizinin kac boyutlu olacaginin giriniz:");
    scanf("%d",&n);
    int dizi[n];
    p=&dizi[0];
    for(i=0;i<n;i++)
    {
        printf("bir sayi giriniz:");
        scanf("%d",&*(p+i));
    }
    for(i=0;i<n;i++)
    {
        toplam=toplam+*(p+i);
    }
    ort=(double)toplam/n;
    printf("dizinin elemanlari ortalamasi:%.2lf",ort);


    return 0;
}
