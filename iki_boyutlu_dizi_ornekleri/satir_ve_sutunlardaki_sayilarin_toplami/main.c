#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[3][3]={{1,6,5},{17,9,21},{10,7,26}};
    int numsatir=sizeof(matris)/sizeof(matris[0]);
    int numsutun=sizeof(matris[0])/sizeof(matris[0][0]);
    int i,j;
    int A[numsatir],B[numsutun],toplam=0;
    for(i=0;i<numsatir;i++)
    {
        A[i]=0 ,B[i]=0;
        for(j=0;j<numsutun;j++)
        {
            A[i]=A[i]+matris[i][j];
            B[i]=B[i]+matris[j][i];
            toplam+=matris[i][j];
        }
        printf("A_dizisi=%d B_dizisi=%d\n",A[i],B[i]);
    }
    return 0;
}
