// Sum of Digits Using Function
#include <stdio.h>

int sumDigits(int n)
{
    int sum=0;

    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }

    return sum;
}

int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Sum of Digits = %d",sumDigits(num));

    return 0;
}