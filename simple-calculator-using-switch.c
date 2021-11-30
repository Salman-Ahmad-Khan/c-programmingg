// // c program for a simple calculator

// #include <stdio.h>
// void main()
// {
//     float a, b, ans;
//     char operator;
//     // printf("Hey enter the two numbers:\n");
//     // scanf("%f %f", &a, &b);
//     //    printf("Enter an operator +,-,*,/");
//     printf("Hey enter the two numbers:\n");
//     scanf("%f %f", &a, &b);
//     printf("Choose from the below options:\n");
//     printf("1.'+' for ADDITION for\n");
//     printf("2.'-' for SUBTRACTION\n");
//     printf("3.'*' for MULTIPLICATION\n");
//     printf("4.'/' for DIVISION\n");

//     scanf("%c", &operator);

//     switch (operator)
//     {
//     case '+':
//         ans = a + b;
//         // printf(" The answer is %f", ans);
//         break;
//     case '-':
//         ans = a - b;
//         // printf(" The answer is %f", ans);
//         break;
//     case '*':
//         ans = a * b;
//         // printf(" The answer is %f", ans);
//         break;
//     case '/':
//         ans = a / b;
//         // printf(" The answer is %f", ans);
//         break;

//     default:
//         printf("ERROR\nPls choose from the above four options:");
//         break;
//     }

//     printf(" The answer is %f", ans);
// }



 // c program for a simple calculator
#include<stdio.h>
void main()
{
    float a,b,ans;
    int x;
    puts("Enter two numbers");
    scanf("%f%f",&a,&b);
    printf("Enter 1 fot addition. 2 for subtraction. 3 for division. 4 for multiplication");
    scanf("%i",&x);

    switch (x)
    {
    case 1:
        ans = a + b;
        // printf(" The answer is %f", ans);
        break;
    case 2:
        ans = a - b;
        // printf(" The answer is %f", ans);
        break;
    case 3:
        ans = a * b;
        // printf(" The answer is %f", ans);
        break;
    case 4:
        ans = a / b;
        // printf(" The answer is %f", ans);
        break;

    default:
        printf("ERROR\nPls choose from the above four options ONLY:");
        break;
    }

    printf(" The answer is %f", ans);
}
