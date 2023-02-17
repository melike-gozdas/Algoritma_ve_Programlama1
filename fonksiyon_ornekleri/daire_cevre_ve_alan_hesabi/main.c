#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

//const double PI=3.14;

float alan_hesapla(float r)
{
    float alan=PI*r*r;
    return alan;
}
float cevre_hesapla(float r)
{
    float cevre=2.0*PI*r;
    return cevre;
}
int main()
{
    float r;
    printf("yaricapi giriniz:");
    scanf("%f",&r);
    printf("alan=%.2f\n",alan_hesapla(r));
    printf("cevre=%.2f",cevre_hesapla(r));
    return 0;
}
