#include <stdio.h>
void main()
{

    int Matrix[3][3], i, j, sum = 0;
    puts("Enter the elements of your matrix\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &Matrix[i][j]);
        }
        printf("\n");
    puts("The array elements are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d ", Matrix[i][j]);
        }
    printf("\n");
    }
printf("\n");
    //calculating the sum of diagonal elements
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                sum = sum + Matrix[i][j];
        }
    printf("The sum of diagonal elements is %d\n", sum);
    puts("Yay...!");
}
