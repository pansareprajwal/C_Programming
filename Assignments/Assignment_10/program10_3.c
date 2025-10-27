#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : KMtoMeter
//  Description :   To convert distance kilometer into meter
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int KMtoMeter(int iKm)
{
    int iM = 0;

    iM = iKm*1000;

    return iM;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d", iRet);

    return 0;
}