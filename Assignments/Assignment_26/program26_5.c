#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Description :   Generating pattern by user input
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          21/11/2025
//
//////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 2 * iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}