#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Count_Factors
//  Description :   To display total number of positive factors of number
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int Count_Factors(int iNumber)
{
    if(iNumber < 0)
    {
        iNumber = -iNumber;
    }

    int iCnt, iTotal = 0;

    for(iCnt = 1; iCnt <= iNumber/2; iCnt++)
    {
        if((iNumber % iCnt) == 0)
        {
            iTotal++;
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("%d\n", Count_Factors(iValue));

    
    return 0;
}