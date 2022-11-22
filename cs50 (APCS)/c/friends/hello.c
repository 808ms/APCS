#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //check correcty argc
    if (argc != 2) {
        printf("usage: ./hello <name>\n");
        return 1;
    }
    // collect a string from the user, then print their name
    printf("Hello, %s!\n", argv[1]);
}