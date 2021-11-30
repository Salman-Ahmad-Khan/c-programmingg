// #include <stdio.h>
// void main()

// {
//   Add();     //function call
//   EvenOdd(); //function call
//   Add();     //function call
// }
// Add() //function definition from line 9-16
// {
//   int a, b, c;
//   puts("Enter two numbers\n");
//   scanf("%d%d", &a, &b);
//   c = a + b;
//   printf("sum is %d\n", c);
// }

// EvenOdd() //function definition from line 18-27
// {
//   int e;
//   puts("Enter a number");
//   scanf("%d", &e);
//   if (e % 2 == 0)
//     printf("%d is even", e);
//   else
//     printf("%d is odd", e);
// }

/* Four ways to define a function
1.takes nothing returns nothing
2.takes something returns nothing
3.takes nothing returns something*
4.takes something return something*/




/*takes nothing returns nothing*/
// #include <stdio.h>
// void main()
// {
//   void add(void);
//   add();
//   add();
// }

// void add()
// {
//   int a, b, c;
//   puts("Enter two numbers");
//   scanf("%d%d", &a, &b);
//   c = a + b;
//   printf("sum is %d", c);
// }

/*takes something returns nothing*/
// #include <stdio.h>
// void main()
// {
//    int x, y;
//   void add(int, int);// function declaration

//   printf("Enter two numbers");
//   scanf("%d%d", &x, &y);
//   add(x, y);
// }
// void add(int a, int b)
// {
//   int c;
//   c = a + b;
//   printf("Sum is %d", c);
// }

/*takes nothing returns something*/
// #include<stdio.h>
// // int add(void);
// void main()
// {
//   int s;
// int add(void);
// s=add();
// printf("sum is %d",s);

// }
// int add()
// {
//   int a,b, c;
//   printf("enter two numbers\n");
//   scanf("%d%d",&a,&b);
//   c=a+b;
//   return (c);//return(a+b); OR return c;

// }

/*takes  something return something*/
#include <stdio.h>
int add(int, int);
void main()
{
  int x, y, s;
  printf("enter two numbers\n");
  scanf("%d%d", &x, &y);
  s = add(x, y);
  printf("sum is %d", s);
}
int add(int a, int b)
{
  int c;
  c = a + b;
  return (c);
}
