// FILES

#include<stdio.h>
void main()
{

    // writing a file
//   FILE *p;
//   int v=21;
//   char d[20]="new-File";
//   p =fopen("c.txt","w");
//   fprintf(p,"%d %s",v,d);

// reading a file
FILE *j;
int a;
char b[10];
j=fopen("c.txt","r");
fscanf(j,"%i %s",&a,&b);
printf("%i %s",a,b);

}