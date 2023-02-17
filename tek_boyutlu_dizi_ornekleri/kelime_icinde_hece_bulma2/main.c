#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int j=0;
    int sayac=0;
    int uzunluk=0;
    char aranan[30];
    char bul[10];
    printf("icinde hece aranacak kelimeyi giriniz:");
    gets(aranan);
    puts(aranan);
    printf("aranacak heceyi giriniz:");
    gets(bul);
    puts(bul);
    while(bul[j]!='\0')
    {
        uzunluk++;
        j++;
    }
    int k;
    while(aranan[i]!='\0')
    {
      //  printf("%c",aranan[i]);
        j=0;
        k=i;
        while(aranan[i]==bul[j])
        {

            i++;
            j++;
            if(j==uzunluk)
            {
                sayac++;
                break;
            }

        }
        if(j<uzunluk)
            i=k+1;
    }
    printf("%d",sayac);
    return 0;
}
