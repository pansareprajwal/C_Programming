#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FactDiff
//  Description :   Display the difference between factors & non factors
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iFact = 0;
    int iNonfact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonfact = iNonfact + iCnt;
        }
    }

    return iFact - iNonfact;
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

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}