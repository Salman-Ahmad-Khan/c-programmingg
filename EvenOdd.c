#include <stdio.h>
void main()
{
    // int numb;
    // printf("Pls enter any number:");
    // scanf("%d", &numb);
    // if (numb % 2 == 0)
    //     printf("The number is Even");
    // else
    //     printf("The number is Odd");




     // c program to find percentage and grade of a student
    float marks, max_marks, percentage;
    printf("Pls enter your marks\n");
    scanf("%f", &marks);
    puts("Pls enter the maximum marks ");
    scanf("%f", &max_marks);

    percentage = (marks / max_marks) * 100;

    if (percentage >= 75)
    {
        printf("You have got Distinction\n");
    }
        else if (percentage < 75 && percentage >= 60)
        {
            printf("You have got First Division\n");
        }
        else if(percentage<60 && percentage>=50)
        {
          printf("You have got Second Division\n");  
        }
        else if(percentage<50&& percentage>=40)
        {
            printf("You have got Third Division\n");
        }
        else 
        {
            printf("You have FAILED\n");
        }
    
}
