#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vize, fin;
    double ort;
    printf("vize notunuzu giriniz:");
    scanf("%lf",&vize);
    printf("final notunuzu giriniz:");
    scanf("%lf",&fin);
    ort=vize*0.4+fin*0.6;
    if(ort>=60)
    {
        printf("gectiniz. %.2lf ortalama ile",ort);
    }
    else
    {
        printf("kaldiniz. %.2lf ortalama ile",ort);
    }

    return;
    }
