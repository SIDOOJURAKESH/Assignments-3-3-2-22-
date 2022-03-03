#include<stdio.h>
#include<string.h>
int own_fun(char str1[]);
int main()
{
char str[50]="rakesh";
int i=0,r=0;
for(i=0;str[i]!='\0';i++)
{
    printf("charactor=%c\t",str[i]);
    printf("address=%p\n",&str[i]);
}
printf("the string is:%s\n",str);
printf("the string is:%p\n",&str);
printf("length of strlen %ld\n",strlen(str));
r=own_fun(str);
printf("own_len strlen is %d\n",r);
}
int own_fun(char str1[])
{
int i=0,n=0;
for(i=0;str1[i]!='\0';i++)
        n++;
return n;
}
