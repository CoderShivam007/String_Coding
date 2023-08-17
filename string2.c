#include<stdio.h>
#include<conio.h>

int main()
{
    int len=0,i,j,count=0,arr[122]={0};
    char str[100];

    printf("Enter string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }

    for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='i' || str[i]=='I' || str[i]=='e' || str[i]=='E' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U' )
        {
            arr[(int)str[i]]++;
            count++;
        }
    }

    printf("\ntotal no. of vowels in string is %d",count);
    for(i=0;i<122;i++)
    {
        if(arr[i]!=0)
        {
            printf("\n%c:%d",i,arr[i]);
        }
    }
    return 0;
}
