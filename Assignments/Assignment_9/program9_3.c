#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DollarToINR
//  Description :   To convert value of USD in rupees 
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iRupee = 0;
    iRupee = 70;

    return iNo*iRupee;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue, iRet = 0;
    
    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}