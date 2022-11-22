#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int marks;
    printf("Enter your percent grade \n");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Error \n");
    }
    else if(marks<50)
    {
        printf("Grade F \n");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade D \n");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Grade C \n");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Grade B \n");
    }
    else if(marks>=80 && marks>=90)
    {
        printf("Grade A \n");
    }
}