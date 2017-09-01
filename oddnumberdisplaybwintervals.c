#include <stdio.h>
void main()
{
    int enter,m =20,n=40;
    clrscr();
    printf("The odd numbers are");
    for (enter = m; enter <= n; enter++)
        {
               if (enter % 2 == 1)
                  printf ("%d ", enter);
         }
                getch();
}
