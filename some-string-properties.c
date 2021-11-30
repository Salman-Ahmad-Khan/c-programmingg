#include <stdio.h>
#include <string.h>

void main()
{
    // int len;
    // char str1[12] = "Hello";
    // char str2[12] = " world";
    // char str3[12];

    // /* lowers the uppercase characters*/
    //     strlwr(str1);
    //     printf("strlwr(str1) :%s\n",str1);

    //     /* copy str1 into str3*/
    //     strcpy(str3, str1);
    //     printf("strcpy(str3,str1):%s\n", str3);

    //     /* concatenates str1 and str2*/
    //     strcat(str1, str2);
    //     printf("strcar(str1,str2): %s\n", str1);

    //     /* total length of str1 after concatenation*/
    //     len = strlen(str1);
    //     printf("strlen(str1) :%d\n", len);

    /* string comparison*/
    char string1[10], string2[10];
    puts("Hey,enter two strings:");
    gets(string1);
    gets(string2);

    puts("Reversed string1 is ");
    strrev(string1);

    puts(string1);
    printf("You entered %s %s\n", string1, string2);
    puts("And the Result/Comparison is Below:\n");
    if (strcmp(string1, string2) == 0)
    {
        puts("Two Strings are SAME");
    }
    else
    {
        puts("Two Strings are NOT same");
    }
}
