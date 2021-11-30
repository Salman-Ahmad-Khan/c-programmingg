#include<stdio.h>
int sum_arry(int [],int);    //function declaration
void main()
{
    int arr[100],i,n,s;
    puts("Enter the size of array ");
    scanf("%i",&n);

    puts ("Enter the array elements ");

    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);

    }

    puts("Entered array is...");

    for(i=0;i<n;i++)
    {
        printf("%i  ",arr[i]);

    }

   s=sum_arry(arr,n);   //function call::- by passing an array and its size
   printf("\nThe sum of elements of array is %i",s);
}

int sum_arry(int d[],int t)   //function definition
{
    int sum=0,j;
    for(j=0;j<t;j++)
    {
        sum=sum+d[j];
    }
    return (sum);



}