#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 7)
    {
        if( year%100 == 8)
        {
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
                // print the values
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
    //print the values 
}
