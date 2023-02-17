#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={5,8,6,1,3,2,7,12,42,23};
    int boyut=sizeof(dizi)/sizeof(int);
    int i,ind;
    int ebs=dizi[0];
    for(i=1;i<boyut;i++)
    {
        if(dizi[i]>ebs)
        {
            ebs=dizi[i];
            ind=i;
        }
    }
    printf("en buyuk=%d\nind=%d",ebs,ind);

    return 0;
}
