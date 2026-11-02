#include <stdio.h>
int main()
{

    int number = 0;
    int sum = 0;
    float average = 0;

    printf("Enter the number of value: \n");
    scanf("%d", &number);
    if (number <= 0)
    {
        printf(" Please enter a positive number.\n");
        return 1;
    }

    for (int i = 1; i <= number; i++)
    {
        int value = 0;
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        sum += value;
    }
    printf("The sum of the values is: %d\n", sum);
    printf("The average of the values is: %.2f\n", (float)sum / number);

    return 0;
}