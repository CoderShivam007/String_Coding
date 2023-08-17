#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    char str[100];

    printf("Enter string:");
    gets(str);

    printf("list of Vowels in string:");

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' ||str[i]=='E' || str[i]=='i' ||str[i]=='I' || str[i]=='o' ||str[i]=='O' || str[i]=='u' ||str[i]=='U' )
        {
            printf("%c ",str[i]);
        }
    }
    return 0;
}
