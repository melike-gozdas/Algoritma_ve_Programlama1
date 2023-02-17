#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={12,45,79,64,32,51,67,93,2,8};
    int boyut=sizeof(dizi)/sizeof(int);
    int i,j;
    int gecici;
    for(i=0;i<boyut;i++)
    {
       for(j=i+1;j<boyut+1;j++)
       {
           if(dizi[i]>dizi[j])
           {
              gecici=dizi[i];
              dizi[i]=dizi[j];
              dizi[j]=gecici;
           }
       }
    }
    for(i=0;i<boyut;i++)
    {
        printf("%d\t",dizi[i]);
    }
    return 0;
}
