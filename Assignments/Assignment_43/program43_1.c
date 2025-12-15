#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayPerfect
//  Description :   To get Perfect number from singly linear linked list
//  Input :         int
//  Output :        void
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

void DisplayPerfect(PNODE Head)
{
    int i, sum = 1;

    while (Head != NULL)
    {
        sum = 0;

        for (i = 1; i <= Head->Data / 2; i++)
        {
            if (Head->Data % i == 0)
            {
                sum = sum + i;
            }
        }

        if (sum == Head->Data)
        {
            printf("%d\t", Head->Data);
        }

        Head = Head->Next;
    }

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPerfect(First);

    return 0;
}