#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : SumNonFact
//  Description :   Display the summation of the non factors
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iTotal = 0;

    for (iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iTotal = iTotal + iCnt;
        }
    }

    return iTotal;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}