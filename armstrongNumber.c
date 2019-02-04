#include<stdio.h>
void main()//PROGRAM FOR ARMSTRONG NO.
{
    int a,b,c=0,d,e,f,i,sum=0,prod=1;
    printf("\n\tEnter no. = ");
    scanf("%d",&a);
    d=a;
    e=a;
    while(e!=0)
    {
        e=e/10;
        c=c+1;
    }
    while(a!=0)
    {
        b=a%10;
        a=a/10;
       {
          for(i=1;i<=c;i++)
            prod=prod*b;
            sum=prod+sum;
       }
        prod=1;
    }
    printf("\tSum is = %d",sum);
    if(sum==d)
    printf("\n\tIt is an Armstrong no.");
    else
        printf("\n\tIts NOT Armstrong no.");
}
