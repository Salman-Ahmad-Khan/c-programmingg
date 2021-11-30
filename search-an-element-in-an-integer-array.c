#include<stdio.h>
void main()
{
    int f[50],i,n,srch,flag=0;
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

    puts("\nEnter the element you want to search ");
    scanf("%i",&srch);

    for(i=0;i<n;i++)
    {
        if(srch==f[i])
        {
            flag=1;
            printf("Number found at index number %i",i+1);
            break;
        }
    }
    if(flag==0)
    printf("Sorry\nElement doesn't EXIST");


}