#include <stdio.h>
void lol(int side)
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{

    lol(4);
    return 0;
}