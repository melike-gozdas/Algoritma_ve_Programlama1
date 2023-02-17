#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int uzunluk;
    int sayac=0;
    int temp;
    char dizi[100];
    printf("bir metin giriniz:");
    gets(dizi);
    i=0;

    while(dizi[i]!='\0')
    {
        sayac++;
        i++;

    }
    uzunluk=sayac;
    j=uzunluk-1;
    i=0;
    while(i<j)
    {
        temp=dizi[j];
        dizi[j]=dizi[i];
        dizi[i]=temp;
        i++;
        j--;
    }
   //puts(dizi);
    printf("%s",dizi);



    return 0;
}
