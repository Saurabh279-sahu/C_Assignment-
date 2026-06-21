// Check Vowel or Consonant Using Function
#include <stdio.h>

void checkVowel(char ch)
{
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("Vowel");
    else
        printf("Consonant");
}

int main()
{
    char ch;

    printf("Enter Character: ");
    scanf("%c",&ch);

    checkVowel(ch);

    return 0;
}