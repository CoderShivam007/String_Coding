#include<stdio.h>
#include<conio.h>

int main()
{
    int len=0,i;
    char str[100];

    printf("Enter string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }

    printf("\nlist of vowels: ");
    for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='i' || str[i]=='I' || str[i]=='e' || str[i]=='E' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U' )
        {
            printf("%c ",str[i]);
        }
    }
    return 0;
}
