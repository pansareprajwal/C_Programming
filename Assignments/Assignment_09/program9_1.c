#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Diplay
//  Description :   To get pattern in form * # 
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt1, iCnt2 = 0;

    for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        printf(" * ");
    }

    for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
    {
        printf(" # ");
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

    Display(iValue);

    return 0;
}