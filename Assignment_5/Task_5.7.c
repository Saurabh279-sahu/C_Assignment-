// Factorial Using Recursion
#include <stdio.h>

long long factorial(int n)
{
    if(n==0 || n==1)
        return 1;

    return n * factorial(n-1);
}

int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Factorial = %lld",factorial(num));

    return 0;
}