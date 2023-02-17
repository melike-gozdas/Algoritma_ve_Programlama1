#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   //Melike GÖZDAŞ NO:19010011020
    int islem;
    gel1:printf("ANA MENU\n");
    printf("islemler\n1:Basit Islemler:\n2:Gelismis Islemler\n");

    printf("Yapmak istediginiz islemi seciniz:");
    scanf("%d",&islem);

    switch(islem)
    {
      gel2:case 1:
           printf("1:Toplama Islemi\n2:Cikarma Islemi\n3:Carpma Islemi\n4:Bolme Islemi\n");

           printf("Yapmak istediginiz islemi seciniz:");
           scanf("%d",&islem);
           int i=0,a;
           double b,c,toplam=0,cikarma=0,carpma=1,bolme;
           switch(islem)
           {
            gel3:case 1:
                 printf("Kac sayi ile bu islemi yapmak istediginizi giriniz:",a);
                 scanf("%d",&a);

                 while(i<a)
                 {
                    printf("Bir sayi giriniz:",b);
                    scanf("%lf",&b);
                    toplam=toplam+b;
                    i++;
                  }
                  printf("Sonuc:%.2lf\n",toplam);

                  printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Isleme Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                  printf("Yapmak istediginiz islemi seciniz:");
                  scanf("%d",&islem);
                  switch(islem)
                  {
                    case 1:
                        goto gel1;
                        break;
                    case 2:
                        goto gel2;
                        break;
                    case 3:
                        goto gel3;
                        break;
                    case 4:
                        goto gel4;
                        break;


                  }
                  break;

             gel4:case 2:
                  printf("Aralarinda bosluk olacak sekilde iki sayi giriniz:",b,c);
                  scanf("%lf %lf",&b,&c);

                  if(b>c)
                  {
                      cikarma=b-c;
                      printf("Sonuc:%.2lf\n",cikarma);
                  }
                  else
                  {
                      cikarma=c-b;
                      printf("Sonuc:%.2lf\n",cikarma);
                  }
                  printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Islemine Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                  printf("Yapmak istediginiz islemi seciniz:");
                  scanf("%d",&islem);
                  switch(islem)
                  {
                    case 1:
                        goto gel1;
                        break;
                    case 2:
                        goto gel2;
                        break;
                    case 3:
                        goto gel4;
                        break;
                    case 4:
                        goto gel7;
                        break;

                  }

                  break;

            gel5:case 3:
                  printf("Kac sayi ile bu islemi yapmak istediginizi giriniz:",a);
                  scanf("%d",&a);

                  while(i<a)
                  {
                      printf("Bir sayi giriniz:",b);
                      scanf("%lf",&b);
                      carpma=carpma*b;
                      i++;
                   }
                   printf("Sonuc:%.2lf\n",carpma);

                   printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Islemine Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                   printf("Yapmak istediginiz islemi seciniz:");
                   scanf("%d",&islem);
                   switch(islem)
                   {
                    case 1:
                        goto gel1;
                        break;
                    case 2:
                        goto gel2;
                        break;
                    case 3:
                        goto gel5;
                        break;
                    case 4:
                        goto gel7;
                        break;

                   }
                   break;
              gel6:case 4:
                   printf("Aralarinda bosluk olacak sekilde iki sayi giriniz:",b,c);
                   scanf("%lf %lf",&b,&c);

                   if(b>c)
                   {
                       bolme=b/c;
                       printf("Sonuc:%.2f\n",bolme);
                   }
                   else
                   {
                       bolme=c/b;
                       printf("Sonuc:%.2f\n",bolme);
                   }
                   printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Islemine Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                   printf("Yapmak istediginiz islemi seciniz:");
                   scanf("%d",&islem);
                   switch(islem)
                   {
                    case 1:
                        goto gel1;
                        break;
                    case 2:
                        goto gel2;
                        break;
                    case 3:
                        goto gel6;
                        break;
                    case 4:
                        goto gel7;
                        break;

                   }
                   break;

        }
        break;

        gel7:case 2:
            printf("1:Faktoriyel Alma\n2:Karekok Alma\n3:Us Alma\n4:Logaritma Alma\n5:Mutlak Deger Alma\n");

            printf("Yapmak istediginiz islemi seciniz:");
            scanf("%d",&islem);

            int sayi,fac=1,us;
            double sonuc,log;

            switch(islem)
            {
              gel8:case 1:
                   printf("Faktoriyeli alinacak sayiyi giriniz:");
                   scanf("%d",&sayi);
                   for(i=sayi; i>0; i--)
                   {
                      fac=fac*i;
                   }
                    printf("Faktoriyel Sonucu:%d\n",fac);

                    printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Islemine Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                    printf("Yapmak istediginiz islemi seciniz:");
                    scanf("%d",&islem);
                    switch(islem)
                    {
                    case 1:
                        goto gel1;
                        break;
                    case 2:
                        goto gel2;
                        break;
                    case 3:
                        goto gel8;
                        break;
                    case 4:
                        goto gel7;
                        break;

                    }
                    break;

               gel9:case 2:
                    printf("Bir sayi giriniz:",sayi);
                    scanf("%d",&sayi);

                    sonuc=(sqrt(sayi));
                    printf("Karekok Sonucu:%.2lf\n",sonuc);

                    printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Islemine Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                    printf("Yapmak istediginiz islemi seciniz:");
                    scanf("%d",&islem);
                    switch(islem)
                    {
                    case 1:
                        goto gel1;
                        break;
                    case 2:
                        goto gel2;
                        break;
                    case 3:
                        goto gel9;
                        break;
                    case 4:
                        goto gel7;
                        break;

                    }
                    break;

               gel10:case 3:
                     printf("Bir sayi giriniz:");
                     scanf("%d",&sayi);

                     printf("Alinacak us degerini giriniz:");
                     scanf("%d",&us);

                     sonuc=pow(sayi,us);

                     printf("Sonuc:%.2lf\n",sonuc);

                     printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Islemine Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                     printf("Yapmak istediginiz islemi seciniz:");
                     scanf("%d",&islem);
                     switch(islem)
                     {
                      case 1:
                        goto gel1;
                        break;
                      case 2:
                        goto gel2;
                        break;
                      case 3:
                        goto gel10;
                        break;
                      case 4:
                        goto gel7;
                        break;

                     }
                     break;

               gel11:case 4:
                     printf("Logaritmasi alinacak sayiyi giriniz:",sayi);
                     scanf("%d",&sayi);

                     sonuc=log10(sayi);
                     printf("Sonuc:%.2lf\n",sonuc);

                     printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Islemine Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                     printf("Yapmak istediginiz islemi seciniz:");
                     scanf("%d",&islem);
                     switch(islem)
                     {
                      case 1:
                        goto gel1;
                        break;
                      case 2:
                        goto gel2;
                        break;
                      case 3:
                        goto gel11;
                        break;
                      case 4:
                        goto gel7;
                        break;

                    }
                     break;
               gel12:case 5:
                     printf("Mutlak degeri alinacak sayiyi giriniz:");
                     scanf("%d",&sayi);

                     if(sayi>0)
                     {
                         printf("Sonuc:%d\n",sayi);
                     }
                     else if(sayi==0)
                     {
                         printf("Sonuc:%d\n",sayi);
                     }
                     else
                     {
                         printf("Sonuc:%d\n",(-sayi));
                     }
                     printf("1:Ana Menuye Don\n2:Basit Islemlerden Devam Et\n3:Islemine Devam Et\n4:Gelismis Islemlerden Devam Et\n");
                     printf("Yapmak istediginiz islemi seciniz:");
                     scanf("%d",&islem);
                     switch(islem)
                     {
                      case 1:
                        goto gel1;
                        break;
                      case 2:
                        goto gel2;
                        break;
                      case 3:
                        goto gel12;
                        break;
                      case 4:
                        goto gel7;
                        break;

                     }
                     break;


         break;




                }




    }




    return 0;
}
