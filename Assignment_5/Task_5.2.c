// Factorial Using Function
#include <stdio.h>

long long factorial(int n)
{
    long long fact=1;
    int i;

    for(i=1;i<=n;i++)
        fact*=i;

    return fact;
}

int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Factorial = %lld",factorial(num));

    return 0;
}