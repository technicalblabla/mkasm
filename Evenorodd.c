#include <stdio.h>
int main()
{
    int nr;

    printf("Enter an integer: ");
    scanf("%d", &nr);

 
    if(number % 2 == 0)
        printf("%d is even.", nr);
    else
        printf("%d is odd.", nr);

    return 0;
}
