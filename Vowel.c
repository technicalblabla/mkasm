#include <stdio.h>
 
int main()
{
  char to;
 
  printf("Enter a character\n");
  scanf("%c", &to);
 
  if (to == 'a' || to == 'A' || to == 'e' || to == 'E' || to == 'i' || to == 'I' || to =='o' || to=='O' || to == 'u' || to == 'U')
    printf("%c is a vowel.\n", to);
  else
    printf("%c is not a vowel.\n", to);
 
  return 0;
}
