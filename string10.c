#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int i,count=0;
	printf("enter a string:");
	gets(str);
	printf("enter a character:\n");
	scanf("%c",&ch);
	for(i=0;i<strlen(str);i++)
	{
		if(ch==str[i])
		count=count+1;
	}
	printf("The frequency of %c is %d.",ch,count);
	return 0;
}
