#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cins;
    int cevap;
    printf("Cinsiyet giriniz.E:erkek,K:kadin\n");
    scanf("%c",&cins);
    if(cins=='E')
    {
        printf("Askerligi tamamladiniz mi? 0:evet,1:hayir\n");
        scanf("%d",&cevap);
        if(cevap==0)
        {
            printf("Ise alinabilir.");
        }
        else
        {
            printf("Istedigimiz kriterlere uygun degilsiniz.");
        }
    }
    else       //bayan durumu
    {
        printf("Evli misin? 0:evet,1:hayir\n");
        scanf("%d",&cevap);
        if(cevap==1)
        {
            printf("Ise alinabilir.");
        }
        else
        {
            printf("Istedigimiz kriterlere uygun degilsiniz.");
        }
    }

    return 0;
}
