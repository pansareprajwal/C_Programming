#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function name : SecMaximum
//  Description :   To get second maximum element from singly linear linked list
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

void InsertFirst(PPNODE Head, int no)
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

int SecMaximum(PNODE Head)
{
    PNODE temp = Head;
    int i, iMax, iSecondMax = 0;
    iMax = temp->Data;
    iSecondMax = temp->Data;

    while (temp != NULL)
    {
        if(iMax < (temp->Data))
        {
            iMax = (temp->Data);
        }
        temp = temp->Next;
    }

    while (Head != NULL)
    {
        if((iMax > (Head->Data)) && (iSecondMax < (Head->Data)))
        {
            iSecondMax = Head->Data;
        }
        Head = Head->Next;
    }

    return iSecondMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 200);
    InsertFirst(&First, 110);

    iRet = SecMaximum(First);

    printf("%d\n",iRet);

    return 0;
}