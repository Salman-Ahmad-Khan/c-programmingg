#include <stdio.h>
void main()
{
    char a[100],b[100];
    int i;
    printf("Enter any string ");
    gets(a);  // better to use gets();
    // scanf("%s",a);
    //  scanf("%s",&a[0]);
    
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("The copied string is: '%s'",b);

}