#include<stdio.h>
void main()
{
    int fact=1,i,n;
    printf("........Factorial Of Number.......\n");
    printf("Enter the Number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fact=fact+fact*i;
    }
    printf("Factorial Is:%d",fact);
}
