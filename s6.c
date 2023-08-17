#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i=0,temp=0;
    char str1[100],str2[100];

    printf("Enter string 1:");
    gets(str1);

    printf("Enter string 2:");
    gets(str2);

    if(strlen(str1) == strlen(str2))
    {
       while(str1[i]!='\0' && str2[i]!='\0')
       {
           if(str1[i] != str2[i])
           {
               temp=1;
               break;
           }
           i++;
       }

       if(temp==0)
       {
           printf("Both strings are exactly same...");
       }

       else
       {
           printf("Both strings are not exactly same...");
       }
    }

    else
    {
        printf("\nBoth strings are not same even in length...");
    }
    return 0;
}

