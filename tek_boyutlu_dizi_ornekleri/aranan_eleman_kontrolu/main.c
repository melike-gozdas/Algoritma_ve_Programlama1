#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[15]={1,5,8,12,16,17,21,28,34,37,46,59,68,72,95};
    int boyut=sizeof(dizi)/sizeof(int);
    int sayi,i,sayac=0;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    for(i=0;i<boyut;i++)
    {
        if(sayi==dizi[i])
         printf("girdiginiz sayi dizide var.\ndizinin %d. indisinde",i);
         sayac++;
    }
    if(sayac==0)
    {
        printf("girdiginiz sayi dizide bulunmamaktadir.");	
	}
    
    return 0;
}
