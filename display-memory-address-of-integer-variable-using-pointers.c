#include<stdio.h>
void main()
{
    int a,*p;
    p=&a;
    puts("Enter any integer ");
    scanf("%i",p);
    printf("\nEntered integer is '%i'\n",*p);
    printf("Address value of Entered integer(%i) is '%u'",*p,p);

}