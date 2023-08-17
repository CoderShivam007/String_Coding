#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    char str[100];
    printf("Enter string:");
    gets(str);

    printf("Entered string is:");
    for(i=0;str[i]!='\0';i++)
    {
        printf("\n%c",str[i]);
    }


    return 0;
}
