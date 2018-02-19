#include<stdio.h>
void main()
{
    int i,k,l;
 printf("...............Print Even Number Between Intervals..............\n");
printf("Start:\n");
scanf("%d",&k);
printf("End:\n");
scanf("%d",&l);
for(i=k;i<l;i++)
{
    if(i%2==0)
    {
        printf("%d\t",i);
    }
}
}
