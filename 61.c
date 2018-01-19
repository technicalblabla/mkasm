#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50];
    int i,c=0;
    printf("enter the string :");
    scanf("%[^n]s",s1);
    for(i=0;s1[i]!='\0';i++){
if(s1[i]==' ')
        {
            c++;
        }
}
 printf("no of words are :%d",c);
}
return 0;
}
