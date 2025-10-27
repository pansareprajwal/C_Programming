#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Sum_natural_number
//  Description :   To sum of all natural number to N
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int Sum_natural_number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

/*
        Time Complexity : O(N)
*/

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int limit = 0;

    printf("Enter number : ");
    scanf("%d",&limit);

    printf("%d\n",Sum_natural_number(limit));
  
    return 0;
}

