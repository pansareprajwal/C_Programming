#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountWhite
//  Description :   count the number of spaces
//  Input :         char 
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

int CountWhite(char *src)
{
    int iCount = 0;

    while(*src != '\0')
    {
        if(*src == ' ')
        {
            iCount++;
        }
        src++;
    }

    return iCount++;

    printf("\n");
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}