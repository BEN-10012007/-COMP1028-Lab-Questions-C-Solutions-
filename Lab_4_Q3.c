#include <stdio.h>
double ben(double num1, double num2, double num3)
{

    if (num1 < num2 && num1 < num3)
    {
        return num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        return num2;
    }
    else
        return num3;
}

int main(void)
{

    double num1, num2, num3;
    printf("Enter 3 decimal num :\n");
    printf("num1:");
    scanf("%lf", &num1);
    printf("num2:");
    scanf("%lf", &num2);
    printf("num3:");
    scanf("%lf", &num3);
    printf("The smallest of %.4f,%.4f, and %.4f is: %.4f", num1, num2, num3, ben(num1, num2, num3));
}