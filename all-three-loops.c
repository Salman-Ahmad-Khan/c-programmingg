//  c program to print Salman five times

#include <stdio.h>
void main()
{
    using for loop

    for (int i = 1; i <= 5; i++)
    {
        printf("  Salman");
    }

      using while loop

    int i=1;
    while ( i<=5)
    {
        printf("  Salman");
        i++;
    }

      using do while loop

    int i=1;
    do
    {
        printf(" Salman");
        i++;
    } while (i<=5);

    // for(int i=1;i<6;i++)
    // printf("Salman  ");

    // int i = 1;
    // while (i < 6)
    // {
    //     printf("  Salman");
    //     i++;
    // }

    
// }



/*c program to print 0-9 by all loops*/
#include<stdio.h>
void main()
{


//using for loop
{
int i;
for(i=0;i<=9;i++)
{
    printf(" %i",i);
}
}

printf("\n");
//using while loop
{
int i=0;
while(i<=9)
{
    printf(" %i",i);
    i=i+1;
}

}
printf("\n");
//using do while loop
{
int i=0;
do 
{
    printf(" %i",i);
    i=i+1;
}while(i<=9);

}



}


