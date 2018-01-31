#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter n value");
scanf("%d",&n);
if(n%2==0)
{
n=n/2;
if(n%2==0)
{
printf("the number is power of 2");
}
}
getch();
}
