#include <stdio.h>
int main(void)
{
	int a,b,sum=0,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b);
		sum=sum+b;
	}
	printf("%d",sum);
  return 0;
}
