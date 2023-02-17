#include <stdio.h>
#include <stdlib.h>

int main()
{   int size;
    int i,j;
    printf("Enter size:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(j==0||j==size-1||i==0||i==size-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
