// Convert Lowercase String to Uppercase Using Function
#include <stdio.h>

void toUpper(char str[])
{
    int i;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
}

int main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    toUpper(str);

    printf("Uppercase String = %s",str);

    return 0;
}