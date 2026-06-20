// strcmp() Function
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    if(strcmp(str1,str2)==0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}