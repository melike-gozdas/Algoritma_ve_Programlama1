#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char metin[100];

    printf("bir metin giriniz:");
    gets(metin);

    for(i=strlen(metin);i>0;i--)
    {
        printf("%c",metin[i-1]);
    }
    return 0;
}
