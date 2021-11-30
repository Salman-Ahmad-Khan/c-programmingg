#include <stdio.h>
struct STUDENT
{
    int roll_no;
    float marks;
    char name[30];
};
void main()
{
    struct STUDENT s[100], temp;
    int i, j,n;
    // puts("Enter the number of students ");
    // scanf("%i",&n);

    for (i = 0; i < 3; i++)
    {
        printf("Enter the ROLL NUMBER of STUDENT(%i)    ", i + 1);
        scanf("%i", &s[i].roll_no);
        printf("Enter the NAME of STUDENT(%i)   ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the MARKS of STUDENT(%i)  ", i + 1);
        scanf("%f", s[i].marks);
    }

    puts("\nEntered Data is...");
    for (i = 0; i < 3; i++)
    {
        printf("\n%i\t%f\t%s\n", s[i].roll_no, s[i].marks, s[i].name);
    }

    for (i = 1; i < 3; i++)
    {
        for (j = 1; j < 3; j++)
        {
            if (s[j].marks > s[j + 1].marks)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    puts("Sorted data on the basis of roll numbers");
    for (i = 0; i < 3; i++)
    {
        printf("\n%i\t%f\t%s\n", s[i].roll_no, s[i].marks, s[i].name);
    }
}