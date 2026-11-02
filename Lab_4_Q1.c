#include <stdio.h>
#include <math.h>
double hypotenuse(double side1, double side2);

int main()
{
    int side1 = 0;
    int side2 = 0;
    printf("Enter the side1 :");
    scanf("%d", &side1);
    printf("Enter the side2 :");
    scanf("%d", &side2);
    printf("The hypotenuse is %g", hypotenuse(side1, side2));
}

double hypotenuse(double side1, double side2)
{
    return sqrt(side1 * side1 + side2 * side2);
}