#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Accept
//  Description :   Accept the number from user and Print Stars
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;
    iValue = 5;

    Accept(iValue);

    return 0;
}