#include <stdio.h>
int main(void)
{
    int a = 0;

    printf("Enter an integer:");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("The absolute value of %d is:%d", a, -a);
    }
    else
        printf("The absolute value of %d is:%d", a, a);
}