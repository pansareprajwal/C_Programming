#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CircleArea
//  Description :   To get area of the circle
//  Input :         float
//  Output :        float
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float fArea, fPI = 0.0;
    fPI = 3.14;

    fArea = fPI*fRadius*fRadius;

    return fArea;
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

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f", dRet);

    return 0;
}