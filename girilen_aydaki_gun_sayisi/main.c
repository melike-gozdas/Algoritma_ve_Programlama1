#include <stdio.h>
#include <stdlib.h>

int main()
{
    int islem;
    printf("Islemler\n1:1.ay\n2:2.ay\n3:3.ay\n4:4.ay\n5:5.ay\n6:6.ay\n7:7.ay\n8:8.ay\n9:9.ay\n10:10.ay\n11:11.ay\n12:12.ay\n");
    printf("yapmak istediginiz islemi seciniz:");
    scanf("%d",&islem);

    switch(islem)
    {
        case 1:
            printf("Ocak =31 gun");
            break;
        case 2:
            printf("Subat =28 gun");
            break;
        case 3:
            printf("Mart =31 gun");
            break;
        case 4:
            printf("Nisan =30 gun");
            break;
        case 5:
            printf("Mayis =31 gun");
            break;
        case 6:
            printf("Haziran =30 gun");
            break;
        case 7:
            printf("Temmuz =31 gun");
            break;
        case 8:
            printf("Agustos =31 gun");
            break;
        case 9:
            printf("Eylul =30 gun");
            break;
        case 10:
            printf("Ekim =30 gun");
            break;
        case 11:
            printf("Kasim =30 gun");
            break;
        case 12:
            printf("Aralik =31 gun");
            break;
    }

    return 0;
    }


