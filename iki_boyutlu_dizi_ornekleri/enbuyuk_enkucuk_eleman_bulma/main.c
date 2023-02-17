#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int sayi;
    int ebs_satir=0;
    int ebs_sutun=0;
    int eks_satir=0;
    int eks_sutun=0;
    int numsatir;
    int numsutun;
    printf("matrisin satirini giriniz:");
    scanf("%d",&numsatir);
    printf("matrisin sutununu giriniz:");
    scanf("%d",&numsutun);
    int dizi[numsatir][numsutun];

    //int numsatir=sizeof(dizi)/sizeof(dizi[0]);
    //int numsutun=sizeof(dizi[0])/sizeof(dizi[0][0]);

    for(i=0;i<numsatir;i++)
    {
        for(j=0;j<numsutun;j++)
        {
            printf("bir sayi giriniz:");
            scanf("%d",&sayi);
            dizi[i][j]=sayi;
        }
    }
    int eks=dizi[0][0];
    int ebs=dizi[0][0];
    for(i=0;i<numsatir;i++)
    {
        for(j=0;j<numsutun;j++)
        {
            if(dizi[i][j]>ebs)
            {
                ebs=dizi[i][j];
                ebs_satir=i;
                ebs_sutun=j;
            }
                if(dizi[i][j]<eks)
            {
                eks=dizi[i][j];
                eks_satir=i;
                eks_sutun=j;
            }
        }
    }
    printf("en buyuk sayi=%d\nen buyuk sayinin satiri=%d\nen buyuk sayinin sutunu=%d\n",ebs,ebs_satir,ebs_sutun);



    printf("en kucuk sayi=%d\nen kucuk sayinin satiri=%d\nen kucuk sayinin sutunu=%d",eks,eks_satir,eks_sutun);
    return 0;
}
