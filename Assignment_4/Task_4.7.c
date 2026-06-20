// strlen() Function
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    printf("Length = %lu",strlen(str));

    return 0;
}