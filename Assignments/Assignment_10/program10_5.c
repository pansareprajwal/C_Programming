#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : SquareMeter
//  Description :   To convert area in square feet to square in meter
//  Input :         float
//  Output :        double
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

double SquareMeter(int fSqFe)
{
    double  fSqMe = 0.0;

    fSqMe = fSqFe*0.0929;

    return fSqMe;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area is square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%.2f", dRet);

    return 0;
}