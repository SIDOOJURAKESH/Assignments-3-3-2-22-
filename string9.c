#include<stdio.h>
#include<string.h>
void str_rev(char str[]);
int main() 
{
    char str1[100];
    printf("Enter a string:");
    scanf("%s",str1);
    printf("\n\n");
    str_rev(str1);
    return 0;
}
void str_rev(char str[]) 
{
    printf("\nEntered string: %s",str);
    int i=0,l=strlen(str),j=l-1;
    printf("\nEntered string length is : %d",l);
    char b[l];
    while(i<l&&j>-1)
    {
        b[i]=str[j];
        i++;
        j--;
    }
    b[i]='\0';
    printf("\nReversed string: %s",b);
}
