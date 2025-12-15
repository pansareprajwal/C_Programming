#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function name : SumDigit
//  Description :   Get addition of all elements from singly linear linked list
//  Input :         int
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          16/12/2025
//
//////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

struct node
{
    int Data;
    struct node *Next;
};

int InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn-> Next = *Head;
        *Head = newn;
    }
}

void SumDigit(PNODE Head)
{
    int iNo, iSum = 0;
    int iDigit = 0;

    while (Head != NULL)
    {
        iSum = 0;
        iNo = Head->Data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iSum = iSum + iDigit;
        }
        printf("%d\t",iSum);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    
    SumDigit(First);

    return 0;
}