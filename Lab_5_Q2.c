#include <stdio.h>
int main()
{
    int ben[20];
    int total_duplicate_ben = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Enter the integer num [%d] between 10-100:", i + 1);
        scanf_s("%d", &ben[i]);
        if (ben[i] < 10 || ben[i] > 100)
        {
            printf("Invalid bro \n");
            i--;
        }
        continue;
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
            if (ben[i] == ben[j])
            {
                total_duplicate_ben++;
            }
    }
    int unique_count = 20 - total_duplicate_ben;
    printf("Total unique num is %d", unique_count);
    return 0;
}