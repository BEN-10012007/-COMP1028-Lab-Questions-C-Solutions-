#include <stdio.h>

#define SIZE 20

int main(void)
{
    int unique[SIZE];
    int uniqueCount = 0;
    int inputCount = 0;
    int number;

    puts("Enter 20 numbers between 10 and 100 (inclusive):");

    while (inputCount < SIZE) {

        if (scanf_s("%d", &number) != 1) {
            puts("Invalid input.");
            return 1;
        }

        if (number < 10 || number > 100) {
            puts("Number out of range. Please enter a number between 10 and 100.");
            continue;
        }

        ++inputCount;

        int duplicate = 0;

        for (int i = 0; i < uniqueCount; ++i) {
            if (unique[i] == number) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0) {
            unique[uniqueCount] = number;
            ++uniqueCount;

        }
    }

    printf("\nTotal unique numbers: %d\n", uniqueCount);

    return 0;
}
