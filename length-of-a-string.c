#include<stdio.h>
void main()
{
    int i,len;
    char d[1000];
    puts("Enter any string ");
    gets(d);
    // scanf("%s",&d[0]);
    // scanf("%s",d);

    len=0;
    while(d[len]!='\0')
    {
        len++;
    };
    printf("The length of your string(%s) is '%i'",d,len);
}