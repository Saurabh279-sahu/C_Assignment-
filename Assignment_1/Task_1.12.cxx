//Swap Two Variables Without Third Variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}