
// c program to compare three numbers

#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greater", a);
        else
            printf("%d is greater", c);
    }
    else
    {
        if (b > c)
            printf("%d is greater", b);
        else
            printf("%d is greater", c);
    }




// OR
 int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    // (a > b)?(a > c)?printf("%d is greater", a):printf("%d is greater", c):(b > c)?printf("%d is greater", b):printf("%d is greater", c);
    
 printf("%d is greater",(a > b)?(a > c)? a: c:(b > c)? b: c);
}
