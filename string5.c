#include<stdio.h>
#include<conio.h>

int main()
{
    int len=0,i;
    char str[100],temp;

    printf("Enter string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("\nstring before reverse:%s",str);
    for(i=0;i<=len/2;i++)
    {
       temp = str[i];
       str[i]=str[len-i];
       str[len-i] = temp;
    }

    printf("\nstring after reverse:");
    for(i=0;i<=len;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
