#include <stdio.h>
#include <stdlib.h>

int main()
{
    double maas;
    double eski_zam;
    int cocuk_sayisi;
    double yeni_zam;

    printf("maasinizi giriniz:");
    scanf("%lf",&maas);
    printf("kac cocuk oldugunu giriniz:");
    scanf("%d",&cocuk_sayisi);
    printf("eski zam oranini giriniz:");
    scanf("%lf",&eski_zam);

    if(maas<2000)
    {
       yeni_zam=(maas*0.20)+(cocuk_sayisi*30);
       if(yeni_zam<eski_zam)
       {
          yeni_zam=eski_zam;
       }
       maas=maas+yeni_zam;
       printf("\n%.2lf\n%.2lf",yeni_zam,maas);
    }
    else if(2000<maas && maas<3000)
    {
        yeni_zam=(maas*0.15)+(cocuk_sayisi*30);
        if(yeni_zam<eski_zam)
        {
           yeni_zam=eski_zam;
        }
        maas=maas+yeni_zam;
        printf("\n%.2lf\n%.2lf",yeni_zam,maas);
    }
    else
    {
        yeni_zam=(maas*0.10)+(cocuk_sayisi*30);
        if(yeni_zam<eski_zam)
        {
           yeni_zam=eski_zam;
        }
        maas =maas+yeni_zam;
        printf("\n%.2lf\n%.2lf",yeni_zam,maas);
    }

    return 0;
}
