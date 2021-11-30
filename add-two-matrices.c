//2-D Array
//C Program to add two matrices
#include <stdio.h>
int main()
{
    // int a[3][3], b[3][3], c[3][3];
    // int i, j;
    // printf("Enter the elements of matrix a[3][3]\n");
    // for (i = 0; i <= 2; i++)
    //     for (j = 0; j <= 2; j++)
    //         scanf("%d", &a[i][j]);

    // printf("Enter the elements of matrix b[3][3]\n");
    // for (i = 0; i <= 2; i++)
    //     for (j = 0; j <= 2; j++)
    //         scanf("%d", &b[i][j]);

    // for (i = 0; i <= 2; i++)
    // {
    //     for (j = 0; j <= 2; j++)
    //     {
    //         c[i][j] = a[i][j] + b[i][j];
    //         printf("%d ", c[i][j]);
    //     }
    //     printf("\n");
    // }

    int a[3][3], b[3][3], c[3][3], i, j, sum = 0;
    printf("Hey,enter the elements of your first matrix of order 3x3\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Hey,enter the elements of your second matrix of order 3x3\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    }

printf("ADDITION:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[j][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
