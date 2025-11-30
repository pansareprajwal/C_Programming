#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountCapital
//  Description :   count the capital characters from string
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

int CountCapital(char *src)
{
    int iCnt = 0;
    
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            iCnt++;
        }
        src++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}