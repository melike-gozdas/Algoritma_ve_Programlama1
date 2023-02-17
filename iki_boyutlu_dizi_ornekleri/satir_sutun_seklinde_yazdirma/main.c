#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int sayi;
    printf("dizinin satirini giriniz:");
    scanf("%d",&i);
    printf("dizinin sutununu giriniz:");
    scanf("%d",&j);
    int dizi[i][j];
    int numsatir=sizeof(dizi)/sizeof(dizi[0]);
    int numsutun=sizeof(dizi[0])/sizeof(dizi[0][0]);

    for(i=0;i<numsatir;i++)
    {
        for(j=0;j<numsutun;j++)
        {
            printf("bir sayi giriniz:");
            scanf("%d",&sayi);
            dizi[i][j]=sayi;
        }
    }
    for(i=0;i<numsatir;i++)
    {
        for(j=0;j<numsutun;j++)
        {
            printf("%d\t",dizi[i][j]);
        }
        printf("\n");
    }


    return 0;
}
