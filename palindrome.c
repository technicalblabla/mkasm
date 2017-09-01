#include <stdio.h>
int main()
{
   int n, reverse_num=0, remainder,temp;
   printf("Enter an integer: ");
   scanf("%d", &n);
   temp=n;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   } 
   if(reverse_num==n) 
      printf("%d is a palindrome number",n);
   else
      printf("%d is not a palindrome number",n);
   return 0;
}
