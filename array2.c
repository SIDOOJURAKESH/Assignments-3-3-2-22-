#include<stdio.h>
int main()
{
	char arr[10]={'a','b','A','u','e','U','I','t','o','i',};
	int i;
	for(i=0;i<10;i++)
	{
		if(arr[i]=='a' ||arr[i]=='A' ||arr[i]=='e' ||arr[i]=='E' ||arr[i]=='i'|arr[i]=='I'||arr[i]=='O'||arr[i]=='o'||arr[i]=='u'||arr[i]=='U')
		{
			printf("array of vowel element:%c\n",arr[i]);
			printf("array of char position[%d] address is:%p\n",i,&arr[i]);
		}
	}
}

