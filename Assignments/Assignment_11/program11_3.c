#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RangeSum
//  Description :   To display sum of all numbers between range
//  Input :         int, int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        return -1;
    }
    else if(iStart < 0)
    {
        return -1;
    }
    else
    {
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum+iCnt;
    }
    return iSum;
    }
     
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1, iValue2, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range");
    }  
    else
    {
        printf("Addition is %d",iRet);
    }
    
    return 0;
}