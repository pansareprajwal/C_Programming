#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FhtoCs
//  Description :   To convert temperature fahrenheit to celsius
//  Input :         float
//  Output :        double
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

double FhtoCs(float fFh)
{
    float fCels = 0.0;

    fCels = (fFh-32)*(5.0/9.0);

    return fCels;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%.2f", dRet);

    return 0;
}