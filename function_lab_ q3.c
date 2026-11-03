#include <stdio.h>

float smallest(float a, float b, float c) {
    float min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    return min;
}

int main(void) {
    float a, b, c;

    printf("Enter three numbers: ");

    if (scanf_s("%f %f %f", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("The smallest of %f, %f, and %f is: %f\n",
        a, b, c, smallest(a, b, c));

    return 0;
}
