#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i;
    char str[100];

    printf("Enter string 1:");
    gets(str);


    printf("entered string is:%s ",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(i%2==0 && str[i]!=' ')
        {
            str[i]= str[i]-32;  //strupr(str)
        }


    }

    printf("\nentered string in alternative case:%s",str);

}
