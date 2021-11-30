#include <stdio.h>
int main()
{
    int A[10]={10,920,101,30,15,20,14,101}, i, sum = 0;
    float avg;
    
    // printf("Enter the Ten numbers\n");
    // for (i = 0; i <= 9; i++)
    
    //     scanf("%d", &A[i]);

    for (i = 0; i <= 9; i++)
    
    {
        sum = sum + A[i];
    }

    avg = sum / 10;
    printf("Average is %f", avg);
    return 0;
}
