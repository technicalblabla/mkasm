#include <stdio.h>
int main(void)
{
	char str[50];
	int count=0;
	scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count+1);
	
}
return 0;
}
