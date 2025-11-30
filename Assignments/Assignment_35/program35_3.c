#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Difference
//  Description :   Display the difference between count of small and capital characters
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

int Difference(char *src)
{
    int iSmall = 0, iCapital = 0;
    
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            iSmall++;
        }
        else if((*src >= 'A') && (*src <= 'Z'))
        {
            iCapital++;
        }
        src++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}