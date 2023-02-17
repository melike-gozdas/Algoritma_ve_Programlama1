#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={10,-4,5,9,71,98,89,4,8,10};
    int *p,*q;
    p=&a[0];
    q=&a[9];

    printf("a dizisi adresi:%p\n",&a);
    printf("p pointerinin gosterdigi adres:%p\n",p);
    printf("q pointerinin gosterdigi adres:%p\n",q);

    printf("a[0] degeri:%d\n",a[0]);
    printf("*p : %d\n",*p);
    printf("*q : %d\n",*q);
    return 0;
}
