#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountSmall
//  Description :   count the small characters from string
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

int CountSmall(char *src)
{
    int iCnt = 0;
    
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}