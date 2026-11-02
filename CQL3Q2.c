#include <stdio.h>
int main()
{
    float Sales;
    printf("Enter Sales in Dollars (-1 to end): ");
    while (scanf("%f", &Sales) == 1 && Sales != -1)
    {
        printf("Salary is %.2f\n", Sales * 0.09 + 200);
        printf("Enter Sales in Dollars (-1 to end): ");
    }
    return 0;
}