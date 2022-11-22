#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("What is your number?\n");

    if (number>0) printf("Your number is positive\n");
    if (number==0) printf("Your number is 0\n");
    else printf("Your number is negative\n");
}