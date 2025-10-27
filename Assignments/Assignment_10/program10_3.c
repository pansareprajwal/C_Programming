#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RectArea
//  Description :   To get area of the Rectangle
//  Input :         float, float
//  Output :        float
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    float fArea = 0.0;

    fArea = fWidth*fHeight;

    return fArea;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    float fValue1, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is %f", dRet);

    return 0;
}