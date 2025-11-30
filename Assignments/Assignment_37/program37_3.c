#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FirstChar
//  Description :   Return index of the first occurence of character
//  Input :         char, chr
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCount++;
        str++;
    }

    if(*str == '\0')
    {
        return -1;
    }

    return iCount;

    printf("\n");
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("%d",iRet);

    return 0;
}