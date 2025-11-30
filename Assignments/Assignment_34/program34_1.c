#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayASCII
//  Description :   To Display ASCII table 
//  Input :         void
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHex\tOcatal\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if((iCnt >= 32) && (iCnt <= 126))
        {
            printf("  %c\t%d\t%X\t%o\n", iCnt, iCnt, iCnt, iCnt);
        }
        else
        {
            printf(".\t%d\t%X\t%o\n", iCnt, iCnt, iCnt);
        }
    }

}

int main()
{
    
    DisplayASCII();

    return 0;
}