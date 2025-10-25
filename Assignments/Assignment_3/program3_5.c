#include <stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : ChkVowel
//  Description :   Check the whether the input is vowel or not
//  Input :         char
//  Output :        BOOL
//  Author :        Prajwal Sanjay Pansare
//  Date :          25/10/2025
//
//////////////////////////////////////////////////////////////

typedef int BOOL; 
#define TRUE 1
#define FALSE 0

BOOL ChkVowel ( char cStr )
{
    if(cStr >= 'A' && cStr <= 'Z')
    {
      cStr = +32;
    }

    if(cStr == 'a'|| cStr == 'e'|| cStr == 'i'|| cStr == 'o'|| cStr == 'u' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}