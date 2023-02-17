#include <stdio.h>
#include <stdlib.h>

int main()
{
    float B ,F,amount_of_gasoline;
    int K;
    printf("Enter the gasoline consumed by the vehicle per kilometer in liters:");
    scanf("%f",&B);
    printf("Enter how many kilometers the car has traveled:");
    scanf("%d",&K);
    printf("Enter the liter price of gasoline:");
    scanf("%f",&F);

    amount_of_gasoline=B*K;
    F=F*amount_of_gasoline;

    printf("amount of gasoline: %.2f\nprice of gasoline: %.2f",amount_of_gasoline,F);



    return 0;
}
