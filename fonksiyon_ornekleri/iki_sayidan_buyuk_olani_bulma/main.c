#include <stdio.h>
#include <stdlib.h>

int buyuk_olani_bul(int a,int b)
{
   if(a>b)
   {
       return a;
   }
   else
   {
       return b;
   }

}
int main()
{
    int a,b;
    printf("bir sayi giriniz:");
    scanf("%d",&a);
    printf("bir sayi giriniz:");
    scanf("%d",&b);
    printf("girdiginiz sayilardan buyuk olan %d",buyuk_olani_bul(a,b));
    return 0;
}
