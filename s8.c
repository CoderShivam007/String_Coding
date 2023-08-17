#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter your String:");
    scanf("%[^\n]",str);
    int i;
    int arr[122]={0};
    int count=0;
    for(i=0;i<strlen(str);i++)
    {
    if(str[i]=='a' || str[i]=='A' || str[i]=='e'|| str[i]=='E' || str[i]=='i'
       || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
    {
        arr[(int)str[i]]++;
        count++;

    }
    }
    if(count==0)
        printf("No vowels are present in the string.");
    else
    {
        printf("Numbers of vowels present in the string are %d\n",count);
    for(i=0;i<122;i++){
        if(arr[i]!=0)
        printf("%c: %d\n",i,arr[i]);
    }}
}
