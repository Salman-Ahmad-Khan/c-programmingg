#include<stdio.h>
void main()
{
    int count=0,i;
    char d[100];
    puts("Enter any string: ");
    gets(d);
    //scanf("%s",d);
    //scanf("%s",&d[0]);
    
    

    i=0;
    while(d[i]!='\0')
    {
        count++; // count=count+1;
        i++;
    }
    printf("The length of your string(%s) is '%d'. ",d,count);
}