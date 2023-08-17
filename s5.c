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
      if(str[i]>='a' && str[i]<='z')
      {
          for(i=0;str[i]!='\0';i++)
         {
          if(i==0 || str[i-1]==' ')
          {
            str[i]= str[i]-32;  //strupr(str)
          }
         }
      }


    printf("\nentered string in camel case:%s",str);
}
