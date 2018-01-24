#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int v, p, sum=0;

    
    printf("Enter size of the array: ");
    scanf("%d", &p);

    
    printf("Enter %d elements in the array: ", p);
    for(i=0; i<p; i++)
    {
        scanf("%d", &arr[v]);

       
        sum += arr[v];
    }

    printf("Sum of all elements of array = %d", sum);

    return 0;
}
