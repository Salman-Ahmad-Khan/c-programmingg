#include<stdio.h>
void main()
{
    int l,i;
    char s[100],temp;
    puts("Enter any string ");
    gets(s);

    printf("Entered string is '%s'\n",s);

    for(l=0;s[l]!='\0';l++);


    for(i=0;i<l/2;i++)

    {
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }

    puts("Reversed string is...");
    printf("%s",s);
}