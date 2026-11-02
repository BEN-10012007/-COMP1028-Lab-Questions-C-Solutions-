#include <stdio.h>

int main()
{
    int sum = 0;

    // Loop through numbers between 1 and 100
    for (int i = 1; i <= 100; i++)
    {
        // Check if the number is divisible by 7
        if (i % 7 == 0)
        {
            // Print the current number and the running sum before adding it
            printf("%d %d\n", i, sum);

            // Add the current number to the sum
            sum += i;
        }
    }

    // Print the final total sum
    printf("%d\n", sum);

    return 0;
}
