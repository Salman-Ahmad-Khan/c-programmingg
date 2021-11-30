#include<stdio.h>
void main()
{
    int f[50],i,n,temp;
    printf("Enter the size of an array ");
    scanf("%i",&n);

    puts("Enter the elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%i",&f[i]);
    }

    puts("Entered array is...");
    for(i=0;i<n;i++)
    {
        printf("%i ",f[i]);
    }

    
    puts("\nReversed form is...");
    for(i=n-1;i>=0;i--)
    {
        printf("%i ",f[i]);
    }
}