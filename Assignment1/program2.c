#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   It is used to Display "Marvellous" 5 times
//  Input :         void
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}