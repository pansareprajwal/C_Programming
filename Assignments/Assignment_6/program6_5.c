#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Percentage
//  Description :   To get percentage for marks 
//  Input :         int, int
//  Output :        float
//  Author :        Prajwal Sanjay Pansare
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////

float Percentage(float fTotal, float fMarks)
{
    if(fTotal == 0)
    {
        return -1;
    }
    
    float fPer = (fMarks/fTotal)*100;
    
    return fPer;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Your percentage is : %.1f%%", fRet);

    return 0;
}