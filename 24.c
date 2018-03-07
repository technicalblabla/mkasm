#include<stdio.h>
void main()
{
    int arr[10],n,i,j,temp=0;
    printf("Get The Input And Get The Range Of Array\n");
    printf("Range:");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
        }
    }
      printf("The Sorted Array is:");
        for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
        
}
