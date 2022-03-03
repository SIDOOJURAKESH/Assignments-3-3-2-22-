#include<stdio.h>
#include<string.h>
void freq(char *str);
int main()
{
	char str[100],ch;
	
	printf("enter a string:");
	gets(str);
	printf("enter a character:\n");
	scanf("%c",&ch);
	freq(str);
	return 0;
	}
void freq(char *str)
{
   int i,count=0;
   char ch;
   for(i=0;i<strlen(str);i++)
{
   if(ch==str[i])
    count=count+1;
}
   printf("The frequency of %c is %d.",ch,count);

}
