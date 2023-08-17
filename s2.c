#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,len=0;
    char str[100],str2[100];
    printf("Enter string 1:");
    gets(str);

    printf("Enter string 2:");
    gets(str2);


    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }


    printf("\n Length of string 1 is:%d",len);
    printf("\n string 2 length is:%d",strlen(str2));
    return 0;
}
