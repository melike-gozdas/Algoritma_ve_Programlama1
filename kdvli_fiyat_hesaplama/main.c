#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F;
    float vat_rate,K;
    printf("Enter the price of the product:");
    scanf("%f",&F);
    printf("Enter vat rate:");
    scanf("%f",&vat_rate);
    K=(F*vat_rate)/100;
    F=F+K;
    printf("Price of the product with VAT:%.2f",F);
    return 0;
}
