#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckLeapYear
//  Description :   To check leap year
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if(year % 4 == 0)
    {
        printf("%d is a leap year.\n",year);
    }
    else
    {
        printf("%d is not a leap year.\n",year);
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int yr;

    printf("Enter year : ");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}
