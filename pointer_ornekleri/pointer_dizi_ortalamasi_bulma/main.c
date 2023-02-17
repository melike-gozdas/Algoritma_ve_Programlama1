#include <stdio.h>
#include <stdlib.h>
float ortalama(int *ptr[]);
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int *ptra[10];
    float sonuc;
    for(i=0;i<10;i++)
        ptra[i]=&a[i];
    sonuc=ortalama(ptra);
    printf("%f",sonuc);
    return 0;
}
float ortalama (int *ptr[])
{
    int i;
    float tp=0;
    for(i=0;i<10;i++)
    {
        tp=tp+*ptr[i];
    }
    return tp/10;
}
