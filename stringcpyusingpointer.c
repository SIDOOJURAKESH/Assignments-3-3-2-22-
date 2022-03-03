#include<stdio.h>
void copystr(char*,char*);
int main()
{
    char str1[100];
    char str2[100];
    printf("enter the string1: ");
    scanf("%[^\n]s",str1);
    copystr(str2,str1);
    printf("%s",str2);
    return 0;
    
}
void copystr(char *str2,char *str1)
{
    while(*str1!='\0')
    {
        *str2=*str1;
        str1++;
        str2++;
    }
     *str2='\0';
}


