#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i;
    int j;
    int toplam=0;
    printf("kac adet sayi ile islemi yapacaginizi yaziniz:");
    scanf("%d",&i);

    for(j=1;j<i+1;j++)
    {
        printf("bir sayi giriniz:");
        scanf("%d",&sayi);
        sayi=sayi*sayi;
        toplam=toplam+sayi;
    }
    printf("kareler toplami=%d",toplam);
    return 0;
}
