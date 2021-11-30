#include<stdio.h>
void main()
{
    int i,j,m,n,a[30][30],b[30][30],transpose[30][30];

    puts("Enter the size of matrix i.e number of ROWS and COLUMNS ");
    scanf("%i%i",&m,&n);

    printf("Enter the elements  of a matrix(%ix%i)row wise  ",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%i",&a[i][j]);
        }
    }

    puts("Entered matrix is...");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%i  ",a[i][j]);
        }
        printf("\n");
    }

    //transpose

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[i][j]=a[j][i];
        }
    }


    puts("Transpose...");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%i  ",transpose[i][j]);
        }
        printf("\n");
    }


}