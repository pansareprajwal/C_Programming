#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Accept the number from user and Print Stars
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    while (iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
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