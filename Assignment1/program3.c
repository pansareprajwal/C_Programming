#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   It is used to Display 5 to 1
//  Input :         void
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
    while (i >= 1)
    {
        printf("%d",i);
        i--;
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