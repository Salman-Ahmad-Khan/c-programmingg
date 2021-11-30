#include <stdio.h>
void main()
{
    char s[100], *c;
    c = &s[0];
    puts("Enter any string  ");
    gets(s);
    
    // scanf("%s",c);  // but it doesn't take multi-words as input
    puts("The Characters of your string are: ");
    for (int i = 0; *(c+i) != '\0'; i++)

    {
        printf("%c ", *(c + i));
    }
}