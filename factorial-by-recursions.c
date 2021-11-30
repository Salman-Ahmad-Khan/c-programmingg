#include <stdio.h>
int fact(int);
void main()
{

    int w, f;
    puts("Enter any number ");
    scanf("%i", &w);
    if (w < 0)
    {
        puts("Factorial of negative numbers doesn't exist");
    }
    else if (w == 0||w == 1)
    {
        puts("Factorial is 1");
    }
    

    else

    {
        f = fact(w);
        printf("The factorial of %i is %i", w, f);
    }
}

int fact(int n)
{
    int i, fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
        
    }
    return (fact);
}
