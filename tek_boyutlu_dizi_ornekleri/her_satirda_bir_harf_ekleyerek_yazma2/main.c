#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[50];
    int i=0;
    int j;
    int uzunluk=0;
    printf("bir kelime giriniz:");
    gets(kelime);
    while(kelime[i]!='\0')
    {
        uzunluk++;
        i++;
    }
    for(i=0;i<uzunluk;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",kelime[j]);
        }
        printf("\n");
    }
    return 0;
}
