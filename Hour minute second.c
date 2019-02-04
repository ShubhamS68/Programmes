
#include<stdio.h>
void main()
{
    int hr,min,min1,sec,sec1,sec2;
    printf("Enter time in seconds = ");
    scanf("%d",&sec);
    hr=sec/3600;
    min1=sec%3600;
    min=min1/60;
    sec1=min1%60;
    printf("%d hour %d minutes %d seconds",hr,min,sec1);
}
