#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Table
//  Description :   To get the table of the input number
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1, iCount = iNo; iCnt <= 10; iCnt++)
    {
        printf(" %d ", iCnt*iCount);
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

    Table(iValue);

    return 0;
}