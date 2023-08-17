#include<stdio.h>
#include<conio.h>

int main()
{
    int len1=0,len2=0,i,temp=0;
    char str1[100],str2[100];

    printf("Enter string 1:");
    gets(str1);

    printf("Enter string 2:");
    gets(str2);

    for(i=0;str1[i]!='\0';i++)
    {
        len1++;
    }

    for(i=0;str2[i]!='\0';i++)
    {
        len2++;
    }

    if(len1 == len2)
    {
        for(i=0;i<=len1;i++)
        {
            if(str1[i]!=str2[i])
            {
                temp=1;
            }
        }

        if(temp==0)
        {
            printf("Both strings are equal...");
        }

        else
        {
            printf("Both strings are not equal...");
        }
    }

    else
    {
        printf("Both strings are not equal even in length....");
    }



    return 0;
}
