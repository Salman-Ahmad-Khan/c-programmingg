// allocating memory at the run time
#include <stdio.h>
#include <stdlib.h>
void main()
{

    // display an integer array
    // int n, *p, *q, i;

    // printf("how many elements you want to put in an array ");
    // scanf("%i", &n);

    // p = malloc(sizeof(int) * n);
    // q = p;
    // printf("Enter the elements  ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%i", p);
    //     p++;
    // }

    // printf("array is:\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%i ", *q);
    //     q++;
    // }

    int i,n,*a,*b;
    printf("how many elements you want ");
    scanf("%i",&n);
    a=malloc(sizeof(int)*n);
    b=a;

    printf("enter elements ");
    for(i=0;i<n;i++)
    {
        scanf("%i",a);
        a++;
    }

    for (i=0;i<n;i++)
    {
        printf("%i ",*b);
        b++;
    }

    free(a);
    free(b);



// display a string
    // int i, n;
    // char *r, *s;
    // printf("enter the size of string ");
    // scanf("%i", n);
    // r = malloc(sizeof(char) * n);
    // s = r;

    // printf("enter the string  ");
    // scanf("%s", r);

    // printf("entered string is ");
    // while (*s != '\0')
    // {
    //     printf("%c ", *s);
    //     s++;
    // }

    // free(r);
    // free(s);
}