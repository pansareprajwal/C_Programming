#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FactRev
//  Description :   Display factors in decreasing order
//  Input :         int
//  Output :        string
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf(" %d ",iCnt);
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

    FactRev(iValue);

    return 0;
}