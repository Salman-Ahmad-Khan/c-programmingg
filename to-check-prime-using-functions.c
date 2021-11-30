#include<stdio.h>
void prime(int);
void main()
{
    int n;
    puts("Enter any number ");
    scanf("%i",&n);

    prime(n);
}

// void prime(int n)
// {
//     int i,count=0;
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }

//     if(count==2)
//     {
//         puts("Entered number is PRIME");
//     }
//     else
//     puts("Not a prime");

// }


//another way


void prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }

    if(i==n)
    
        puts("Entered number is PRIME");
    
    else

    puts("Not a prime");

}
