#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountChar
//  Description :   display the frequency of character in string
//  Input :         char, chr
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
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

    iRet = CountChar(arr, cValue);

    printf("%d",iRet);

    return 0;
}