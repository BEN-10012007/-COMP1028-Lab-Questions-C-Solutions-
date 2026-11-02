int pow(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    else if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * pow(a, b - 1);
    }
}

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter base :");
    scanf("%d", &a);
    printf("Enter exponential :");
    scanf("%d", &b);
    printf("ANS is %d", pow(a, b));
    return 0;
}