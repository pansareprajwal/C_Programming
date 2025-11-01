//  check if prime number (Optimized)

#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;

    bool bFlag = false;         

    if(iNo < 0)
    {
        iNo = -iNo;
    }           

    for(iCnt = 2, bFlag = true; iCnt <= (iNo/2); iCnt++)    // Initializing multiple variables for loop
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;              // Optimization1
        }
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }

    return 0;
}

/*
        Time Complexity : For prime -N/2
        Time Complexity : For non prime 1 or 2
*/