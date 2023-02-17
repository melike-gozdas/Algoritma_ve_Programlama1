#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pc,c;

    c=22;
    printf("address of c:%u\n",&c);
    printf("value of c:%d\n\n",c);

    pc=&c;
    printf("content address of pointer pc:%u\n",pc);
    printf("content of pointer pc:%d\n\n",*pc);

    c=11;
    printf("content addreass of pointer pc:%u\n",pc);
    printf("content of pointer pc:%d\n\n",*pc);

    *pc=2;
    printf("address of c:%u\n",&c);
    printf("value of c:%d\n\n",c);
    return 0;
}
