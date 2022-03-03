#include<stdio.h>
void mystrcpy(char str2[20],char str1[20]);
int main()
{
	char str1[20],str2[20];
	int i;
	printf("Enter string:\n");
	gets(str1);
	mystrcpy(str2,str1);
	printf("Copied string is:%s",str2);
}
void mystrcpy(char str2[20],char str1[20])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
}
