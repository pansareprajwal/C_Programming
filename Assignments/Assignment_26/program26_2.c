#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Description :   print pattern using # and numbers
//  Input :         int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          21/11/2025
//
//////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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