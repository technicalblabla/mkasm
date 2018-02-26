#include <stdio.h>
int max(int array[50],int n);
int main(void) 
{
	int array[50];
	int i,res,n;
	printf("no of elements in the array");
	scanf("%d",&n);
	printf("\narray\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	printf("%d ",array[i]);
	}
	res=max(array,n);
	printf("\n%d",res);
	return 0;
}
int max(int array[50],int n)
{
	int i,mx=array[0];
	for(i=1;i<n;i++)
	{
	scanf("%d",&array[i]);
	if(array[i]>mx)
	{
		mx=array[i];
	}
		
	}

	return (mx);
}	
