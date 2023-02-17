#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilksayi=1;
    int ikincisayi=1;
    int i ,j;

    printf("serinin uzunlugunu giriniz:");
    scanf("%d",&j);
    printf("%d\n%d\n",ilksayi,ikincisayi);
    for(i=0;i<j-2;i++)
    {
        int temp=ikincisayi;
        ikincisayi+=ilksayi;
        ilksayi=temp;  //ilk sayiyla ikinci sayi esit oldugu icin ve ilk basta ikinci sayiyi tempe atadýktan sonra ikinci sayi degistigi icin tempi ilksayiya atadik.
        printf("%d\n",ikincisayi);
    }
    return 0;
}
