#include <stdio.h>
int main()
{
    int ben[20];
    int total_unique_ben = 0;
    int is_total_duplicate_ben = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the integer num [%d] between 10-100:", i + 1);
        scanf("%d", &ben[i]);
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
                int is_total_duplicate_ben = 1;
                break;
            }
    }
    if (!is_total_duplicate_ben)
    {
        total_unique_ben++;
    }

    int unique_count = total_unique_ben;
    printf("Total unique num is %d", unique_count);
    return 0;
}