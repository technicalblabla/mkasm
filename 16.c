#include<stdio.h>
void main()
{
    int i,n,f=0;
    printf("Get The Any Poisitive Integer:\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
             f=1;
             break;
        }
       
    }
    if(f==0)
    {
        printf("If it's a Prime Number:\n");
    }
    else
    {
        printf("If It's a Non Prime Number\n");
    }
}
