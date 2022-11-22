#include <cs50.h>
#include <stdio.h>

//declare our functions
int askHeight(void);
void printBlok(int rowLength, int rowNumber) ;
void printRow(int height);

// Main function
int main(void)
{
    // call other functions
    printRow(askHeight());
}

// Prompt for hight
int askHeight(void)
{

    bool incorrect_input = true;

    int height;


    while (incorrect_input)
    {

        height = get_int("Height: \n");


        if (height > 0 && height < 9)
        {

            incorrect_input = false;
        }
    }

    return height;
}
//print the levels
void printBlok(int rowLength, int rowNumber)
{

    int blokCount = 0;
    int emptyBloks = (rowLength - rowNumber) - 1;
    int fullBloks = (rowLength - emptyBloks) - 1;
    int fullRowLength = (rowLength + fullBloks) + 1;


    while (blokCount < fullRowLength)
    {
        if (blokCount == (rowLength - 1))
        {
            printf("#  ");
            blokCount++;
        }
        else if (blokCount == (fullRowLength - 1))
        {
            printf("#\n");
            blokCount++;
        }
        else if (blokCount < emptyBloks)
        {
            printf(" ");
            blokCount++;
        }
        else
        {
            printf("#");
            blokCount++;
        }
    }
}
//makes rows for the int of hight
void printRow(int height)
{
    int rowCount = 0;

    while (rowCount < height)
    {
        printBlok(height, rowCount);
        rowCount++;
    }
}