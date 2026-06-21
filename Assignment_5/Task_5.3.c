// Reverse Number Using Function
#include <stdio.h>

int reverse(int n)
{
    int rev=0;

    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }

    return rev;
}

int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Reverse = %d",reverse(num));

    return 0;
}