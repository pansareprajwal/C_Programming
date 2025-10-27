#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckNumber
//  Description :   To check negative and positive number
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

void CheckNumber(int num)
{
    if(num < 0)
    {
        printf("%d is negative number",num);
    }
    else
    {
        printf("%d is positive number",num);
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    CheckNumber(number);

    return 0;
}
