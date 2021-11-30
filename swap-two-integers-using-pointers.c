#include<stdio.h>
void main()
{
    int a,b,temp,*p,*q;
    p=&a;
    q=&b;
    puts("Enter the first integer ");
    scanf("%i",p);
     puts("Enter the second  integer ");
    scanf("%i",q);
    printf("Before Swapping\nThe value of 'a' is %i\nThe value of 'b' is %i\n",*p,*q);
    temp=*p;
    *p=*q;
    *q=temp;
    puts("\nSwaping in Process...");
 printf("\nAfter Swapping\nThe value of 'a' is %i\nThe value of 'b' is %i",*p,*q);
}