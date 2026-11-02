#include <stdio.h>
int main()
{

    int number = 0;
    int sum = 0;
    float average = 0;

    printf("Enter the number of value: ");
    scanf("%d", &number);
    if (number <= 0)
    {
        printf(" Please enter a positive number.\n");
        return 1;
    }

    int counter = 1;
    while (counter <= number)
    {

        int value = 0;
        printf("Enter the number of value %d: ", counter);
        if (scanf("%d", &value) != 1 || value == 0)
        {
            printf("Invalid input. Please enter an integer.\n");
            break;
        }
        sum += value;
        counter++;
    }

    printf("The sum of the values is: %d\n", sum);
    printf("The average of the values is: %.2f\n", (float)sum / number);

    return 0;
}