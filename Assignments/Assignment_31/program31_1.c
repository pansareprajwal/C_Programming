#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Description :   Generating pattern by user input
//  Input :         int, int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          22/11/2025
//
//////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }


    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if((j == 1) || (i == iRow) || (j == i) || (i > j))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}