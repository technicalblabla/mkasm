#include <stdio.h>
int main()
{
    int en, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&en);

    for(i=2; i<=en/2; ++i)
    {
        if(en%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",en);
    else
        printf("%d is not a prime number.",en);
    
    return 0;
}
