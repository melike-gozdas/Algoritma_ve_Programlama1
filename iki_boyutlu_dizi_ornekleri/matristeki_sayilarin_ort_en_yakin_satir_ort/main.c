#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[3][2]= {{1,6},{4,9},{8,15}};
    int numsatir=sizeof(dizi)/sizeof(dizi[0]);
    int numsutun=sizeof(dizi[0])/sizeof(dizi[0][0]);
    int i,j;
    int toplam=0;
    double ort;
    double satir_ort;
    double fark;
    double minFark=0;
    int minIndex=0;

    for(i=0; i<numsatir; i++)
    {
        for(j=0; j<numsutun; j++)
        {
            toplam=toplam+dizi[i][j];
        }
    }
    ort=(double)toplam/(double)(numsatir*numsutun);
    printf("matris elemanlarinin ortalamasi=%.2lf\n",ort);
    minFark = toplam;
    toplam=0;
    for(i=0; i<numsatir; i++)
    {
        toplam=0;
        for(j=0; j<numsutun; j++)
        {
            toplam=toplam+dizi[i][j];
        }
        satir_ort=(double)toplam/(double)numsutun;

        fark=ort-satir_ort;

        fark = (fark<0)?(-1*fark):fark;

        if(minFark > fark)
        {
            minFark=fark;
            minIndex=i;
        }
        printf("%d.satir ortalamasi=%.2lf\n",i,satir_ort);

    }

    printf("\n%d.min ortalamasi=%.2lf\n",minIndex,minFark);

    return 0;
}
