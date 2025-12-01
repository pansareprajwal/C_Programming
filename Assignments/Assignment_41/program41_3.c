#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Displaying pattern using recursion
//  Input :         char
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          01/12/2025
//
//////////////////////////////////////////////////////////////

int Display(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        Display(str + 1);
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%s",arr);

    iRet = Display(arr);

    printf("%d",iRet);

    return 0;
}