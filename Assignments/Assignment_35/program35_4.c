#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : ChkVowel
//  Description :   Checking whether string contains vowels or not
//  Input :         char 
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *src)
{
    while(*src != '\0')
    {
        if((*src == 'a') || (*src == 'e')|| (*src == 'i')|| (*src == 'o')|| (*src == 'u'))
        {
            return TRUE;
        }
        src++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("There is no Vowels");
    }

    return 0;
}