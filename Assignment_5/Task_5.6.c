// Convert Uppercase String to Lowercase Using Function
#include <stdio.h>

void toLower(char str[])
{
    int i;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
}

int main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    toLower(str);

    printf("Lowercase String = %s",str);

    return 0;
}