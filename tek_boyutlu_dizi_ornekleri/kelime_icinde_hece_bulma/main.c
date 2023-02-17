#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrlen(char d[])
{
    int i=0;

    while(d[i] != '\0')
        i++;

    return i;
}

int main()
{
    int i=0;
    int j;
    int sayac=0;
    char aranan[100];
    char bul[10];
    printf("icinde hece aranacak kelimeyi giriniz:");
    gets(aranan);
    printf("aranacak heceyi giriniz:");
    gets(bul);

    int b1 = myStrlen(aranan);
    int b2 = myStrlen(bul);

    for(i=0;i<=b1-b2;i++)
    {
        if(aranan[i] == bul[0])
        {
            j=1;
            for(j=1;j<b2;j++)
            {
                if(aranan[i+j] != bul[j])
                    break;
            }

            if(j == b2)
                sayac++;
        }
    }

    printf("\nBulunan hece sayisi=%d\n", sayac);

    return 0;
}
