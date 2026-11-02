#include <stdio.h>
unsigned long long factorial(int n);

int main()
{

    int num = 0;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Enter a non-negative integer\n");
    }
    else
    {

        unsigned long long result = factorial(num);
        printf("The factorial of %d is: %llu", num, result);
    }
    return 0;
}
unsigned long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}