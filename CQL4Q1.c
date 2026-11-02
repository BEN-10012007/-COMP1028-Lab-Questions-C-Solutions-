// #include <stdio.h>
// float calcharge(float hours)
// {
//     return 2.00 + (int)((int)hours % 3) * 0.5;
// }

// int main(void)
// {
//     float hours;

//     printf("Car\tHours\tCharge\n");

//     for (int i = 1; i <= 3; i++)
//     {
//         printf("Enter hours for 3 cars:");
//         scanf("%f", &hours);
//         if (hours <= 0)
//         {
//             printf("Invalid input. Please enter a positive number of hours.\n");
//             i--; // Decrement i to repeat the iteration for the same car
//             continue;
//         }
//         else if (hours <= 2 && hours > 0)
//         {
//             printf("Car%d\t%.1f\t%.2f\n", i, hours, 2.00);
//         }
//         else
//         {
//             printf("Car%d\t%.1f\t%.2f\n", i, hours, calcharge(hours));
//         }
//     }

//     return 0;

// }
#include <stdio.h>
#include <math.h>

#define NUM_CARS 3

// Function prototype
double calculateCharges(double hours);

int main()
{
    double hours[NUM_CARS];
    double charges[NUM_CARS];
    double totalHours = 0.0;
    double totalCharges = 0.0;

    // Input hours for all customers using a loop
    for (int i = 0; i < NUM_CARS; i++)
    {
        printf("Enter the hours parked for customer %d: ", i + 1);
        scanf("%lf", &hours[i]);

        // Calculate charge and accumulate totals
        charges[i] = calculateCharges(hours[i]);
        totalHours += hours[i];
        totalCharges += charges[i];
    }

    // Print the formatted output table
    printf("\n%-8s%10s%12s\n", "Car", "Hours", "Charge");
    for (int i = 0; i < NUM_CARS; i++)
    {
        printf("%-8d%10.1f%12.2f\n", i + 1, hours[i], charges[i]);
    }
    printf("%-8s%10.1f%12.2f\n", "TOTAL", totalHours, totalCharges);

    return 0;
}

// Function to determine the charge for each customer
double calculateCharges(double hours)
{
    if (hours <= 3.0)
    {
        return 2.00;
    }

    // $2.00 baseline + $0.50 per hour (or part thereof) over 3 hours
    double charge = 2.00 + ceil(hours - 3.0) * 0.50;

    // Maximum cap for a 24-hour period
    if (charge > 10.00)
    {
        return 10.00;
    }

    return charge;
}
