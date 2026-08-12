#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;

    do
    {
        height = get_int("Height: ");
    }

    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
        {
            printf(" ");
        }
        for (int x = -1; x < i; x++)
        {
            printf("#");
        }

        printf("  ");
        for (int y = -1; y < i; y++)
        {
            printf("#");
        }

        printf("\n");
    }
}
