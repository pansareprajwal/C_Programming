#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Reply Hello and Demo as per user input
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}