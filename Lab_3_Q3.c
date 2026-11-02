#include <stdio.h>

int main()
{
    int binary[8];
    printf("%-10s\t%-10s\t%-10s\t%-10s\n", "Decimal", "Binary", "Octal", "Hexadecimal");
    printf("------------------------------------------------------------\n");
    for (int i = 1; i <= 256; i++) // i=0;i<0;i++
    {
        int num = i;
        for (int j = 7; j >= 0; j--)
        {
            binary[j] = num % 2;
            num /= 2;
        }

        printf("%d\t\t", i);

        for (int j = 0; j < 8; j++)
        {
            printf("%d", binary[j]);
        }
        printf("\t %-10o \t%-10x\n", i, i);
    }

    return 0;
}
