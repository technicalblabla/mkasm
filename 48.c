#include<stdio.h>
#include<conio.h>
int main()
{
int n[10],i,k;
printf("enter the array size");
scanf("%d",&k);
for(i=0;i<=k;i++)
{
scanf("%d",&n[i]);
}
k=k/2;
printf("%d",n[k]);
getch();
}
