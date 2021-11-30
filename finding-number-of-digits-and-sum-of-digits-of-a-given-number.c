#include<stdio.h>
void main()
{
int n,r,sum,count;
printf("Enter any number ");
scanf("%i",&n);
printf("The entered number is '%i'\n",n);

// count=0;
// while (n!=0)
// {
//     n=n/10;    // it removes last digit
//     count++;
// }
// printf("The number of digits in above number are %i",count);


sum=0;
while (n!=0)
{
    r=n%10;  //it gives last digit or remainder
    n=n/10;  // it removes last digit
    sum=sum+r;

}

printf("The sum of digits of abobe number is %i",sum);





       
}

