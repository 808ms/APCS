#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int ("Size");
     int numbers[n];
     numbers[0] = 1;

    for(int i = 1; i < n; i++)
    {
        numbers[i] = 2 * numbers[i -1];
    }
    for (int i = 0; i < n; i++)
    {
	printf("%i\n", numbers[i]);
    }
}