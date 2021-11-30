#include <stdio.h>
void main()
{
    int n, i, j, temp, g[50];
    puts("Enter the size of array ");
    scanf("%i", &n);

    puts("Enter the elements of array ");
    for (i = 0; i < n; i++)
    {
        scanf("%i", &g[i]);
    }

    puts("Entered array is...");

    for (i = 0; i < n; i++)
    {
        printf("%i  ", g[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-1; j++)
            
        {
            if (g[j] > g[j + 1])
            {
                temp = g[j];
                g[j] = g[j + 1];
                g[j + 1] = temp;
            }
        }
    }

    puts("\nSorted array is...");

    for (i = 0; i < n; i++)
    {
        printf("%i  ", g[i]);
    }
}