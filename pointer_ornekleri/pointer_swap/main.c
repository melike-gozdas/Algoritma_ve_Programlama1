#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    a=12;
    b=27;
    printf("a:%d b:%d\n",a,b);
    swap(&a,&b);
    printf("a:%d b:%d\n",a,b);
    return 0;
}
