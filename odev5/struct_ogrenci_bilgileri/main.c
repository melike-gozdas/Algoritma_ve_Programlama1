#include <stdio.h>
#include <stdlib.h>

typedef struct ders
{
    char ders_adi[20];
    float vize_notu;
    float fin_notu;
} Ders;
typedef struct ogrenci
{
    int ogrenci_num;
    char ad[20];
    char soyad[20];
    int ders_sayisi;
    Ders *dersler;
} OB;
int mystrcmp(const char *q,const char *s)
{
    int deger;
    while(*q==*s)
    {
        if(*q=='\0')
        {
            deger=0;
            break;
        }
        ++q;
        ++s;
    }
    deger=*q-*s;
    return deger;

}
void Ogrenci_Ara(int a,OB *p)
{
    int i,j,*q,*s;
    char isim[20];
    q=isim;
    printf("\nAramak istediginiz ogrencinin adini giriniz:");
    scanf("%s",q);
    for(i=0; i<a; i++)
    {
        printf("\n");
        s=(p+i)->ad;
        if(mystrcmp(q,s)==0)
        {
            printf("Ogrenci Numarasi:%d\nOgrencinin Adi-Soyadi:%s %s\nDers Sayisi:%d\n",(p+i)->ogrenci_num,(p+i)->ad,(p+i)->soyad,(p+i)->ders_sayisi);
            printf("Aldigi Dersler:");
            for(j=0; j<(p+i)->ders_sayisi; j++)
            {
                printf("%s  ",((p+i)->dersler+j)->ders_adi);
            }
            printf("\n");
        }

    }
    printf("\n");
}
void Durum_Goster(int a,OB *p)
{
    int i,j;
    float vize,fin;
    float sonuc;
    for(i=0; i<a; i++)
    {
        printf("\n%s %s\n",(p+i)->ad,(p+i)->soyad);
        for(j=0; j<(p+i)->ders_sayisi; j++)
        {
            vize=((p+i)->dersler+j)->vize_notu;
            fin=((p+i)->dersler+j)->fin_notu;
            sonuc=vize*0.4+fin*0.6;
            printf("\t%s dersi\n",((p+i)->dersler+j)->ders_adi);
            printf("\tvize notu:%.2f\n",((p+i)->dersler+j)->vize_notu);
            printf("\tfinal notu:%.2f\n",((p+i)->dersler+j)->fin_notu);
            printf("\tders ortalamasi:%.2f\n",sonuc);
            if(sonuc>=60)
            {
                printf("\t%s dersinden gecmistir.\n",((p+i)->dersler+j)->ders_adi);
            }
            else
            {
                printf("\t%s dersinden kalmistir.\n",((p+i)->dersler+j)->ders_adi);
            }
        }
    }
}
void Listele(int a,OB *p)
{
    int i,j;
    printf("\n*****OGRENCI LISTESI*****\n");
    for(i=0; i<a; i++)
    {
        printf("\nOgrenci Numarasi:%d\nOgrencinin Adi-Soyadi:%s %s\nDers Sayisi:%d\n",(p+i)->ogrenci_num,(p+i)->ad,(p+i)->soyad,(p+i)->ders_sayisi);
        printf("Aldigi Dersler:");
        for(j=0; j<(p+i)->ders_sayisi; j++)
        {
            printf("%s  ",((p+i)->dersler+j)->ders_adi);
        }
        printf("\n");
    }
}
int main()
{
    int a,i,j;
    printf("Ogrenci sayisini giriniz:");
    scanf("%d",&a);
    OB *p=(OB*)malloc(a*(sizeof(OB)));
    for(i=0; i<a; i++)
    {
        printf("\nOgrencinin ogrenci numarasini giriniz:");
        scanf("%d",&(p+i)->ogrenci_num);
        printf("Ogrencinin adini giriniz:");
        scanf("%s",(p+i)->ad);
        printf("Ogrencinin soyadini giriniz:");
        scanf("%s",(p+i)->soyad);
        printf("Ogrencinin ders sayisini giriniz:");
        scanf("%d",&(p+i)->ders_sayisi);
        (p+i)->dersler =(Ders*)malloc((p+i)->ders_sayisi*(sizeof(Ders)));
        for(j=0; j<(p+i)->ders_sayisi; j++)
        {
            printf("\nDersin adinin giriniz:");
            scanf("%s",((p+i)->dersler+j)->ders_adi);
            printf("Ogrencinin vize notunu giriniz:");
            scanf("%f",&((p+i)->dersler+j)->vize_notu);
            printf("Ogrencinin final notunu giriniz:");
            scanf("%f",&((p+i)->dersler+j)->fin_notu);
        }
    }
    printf("Devam etmek icin herhangi bir tusa basiniz:");
    getch();
    system("cls");
    while(1)
    {
        int islem;
        printf("\n");
        printf("1.OGRENCI ARAMA\n");
        printf("2.DURUM GOSTER\n");
        printf("3.LISTELE\n");
        printf("4.CIKIS\n");
        printf("\nYapmak istediginiz islemi seciniz:");
        scanf("%d",&islem);

        switch(islem)
        {
        case 1:
            Ogrenci_Ara(a,p);
            break;
        case 2:
            Durum_Goster(a,p);
            break;
        case 3:
            Listele(a,p);
            break;
        case 4:
            printf("Cikis yapiliyor.");
            exit(0);
        }
    }
    return 0;
}
