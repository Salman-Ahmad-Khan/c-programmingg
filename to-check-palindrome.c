#include<stdio.h>
void main()
{
    int i,l;
    char s[20],temp;
    puts("Enter any string ");
    // gets(s);
    // scanf("%s",s);
    scanf("%s",&s[0]);
    l=0;
    while(s[l]!='\0')
    {
        l++;
    };

    for(i=0;i<l/2;i++)

    {
       if(s[i]!=s[l-i-1])
       {
           puts("Not a palindrome");
           break;
       }
    }
    
    if(i==l/2)
    {
        puts("Your entered string is a palindrome");
    }

}