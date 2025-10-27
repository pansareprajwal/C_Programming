#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : NonFact
//  Description :   Display the multiplication of non factors
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf(" %d ", iCnt);
        }
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
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}