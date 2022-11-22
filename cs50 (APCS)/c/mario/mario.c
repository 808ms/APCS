#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for height between 1 & 8, inclusive
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //here we find a pattern
            if (i + j <  n - 1)
            {
                printf(" ");
            }

            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
