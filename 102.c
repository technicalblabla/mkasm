#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	while(N%2==0)
	{
		N/=2;
	}
	printf("%d",N);
  // print the values

}
