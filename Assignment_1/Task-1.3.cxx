//Input and Print Student Name & Roll Number
#include <stdio.h>

int main()
{
    char name[50];
    int rollno;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollno);

    printf("\nStudent Name: %s", name);
    printf("\nRoll Number: %d", rollno);

    return 0;
}