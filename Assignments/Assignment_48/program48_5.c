#include<stdio.h>
#include<stdlib.h>

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

//////////////////////////////////////////////////////////////
//
//  Function name : InsertFirst
//  Description :   To Insert element at first positoin in linked list
//  Input :         PPNODE, int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/12/2025
//
//////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////
//
//  Function name : InsertLast
//  Description :   To Insert element at Last positoin in linked list
//  Input :         PPNODE, int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/12/2025
//
//////////////////////////////////////////////////////////////

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;

        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }

        temp->Next = newn;
    }
}

//////////////////////////////////////////////////////////////
//
//  Function name : DeleteFirst
//  Description :   To Delete first positoin in linked list
//  Input :         PPNODE
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/12/2025
//
//////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE Head)
{
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else
    {
        temp = *Head;

        *Head = (*Head)->Next;
        free(temp);
    }
}

//////////////////////////////////////////////////////////////
//
//  Function name : DeleteLast
//  Description :   To Delete last positoin in linked list
//  Input :         PPNODE
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/12/2025
//
//////////////////////////////////////////////////////////////

void DeleteLast(PPNODE Head)
{
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else
    {
        temp = *Head;

        while(temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        free(temp->Next);
        temp->Next = NULL;
    }
}

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   To Display Elements of Linked List
//  Input :         PNODE
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/12/2025
//
//////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        printf("| %d |->",temp->Data);
        temp = temp->Next;
    }
    printf("NULL\n");
}

//////////////////////////////////////////////////////////////
//
//  Function name : Count
//  Description :   To Count element from linked list
//  Input :         PNODE
//  Output :        int
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/12/2025
//
//////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;
    int iCount = 0;

    while(temp != NULL)
    {
        iCount++;
        temp = temp->Next;
    }
    return iCount;
}

//////////////////////////////////////////////////////////////
//
//  Function name : InsertAtPos
//  Description :   To Insert element at positoin in linked list
//  Input :         PPNODE, int, int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/12/2025
//
//////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE Head, int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount = 0, iCnt = 0;
    iCount = Count(*Head);

    if((pos < 1) || (pos > iCount+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(Head, no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(Head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->Data = no;
        newn->Next = NULL;

        temp = *Head;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->Next;
        }

        newn->Next = temp->Next;
        temp->Next = newn;
    }
}

//////////////////////////////////////////////////////////////
//
//  Function name : DeleteAtPos
//  Description :   To Delete element at positoin in linked list
//  Input :         PPNODE, int
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          30/12/2025
//
//////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head, int pos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    int iCount = 0, iCnt = 0;

    iCount = Count(*Head);

    if((pos < 1) || (pos > iCount))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(Head);
    }
    else if(pos == iCount)
    {
        DeleteLast(Head);
    }
    else
    {
        temp = *Head;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->Next;
        }

        target = temp->Next;
        temp->Next = target->Next;
        free(target);
    }
}

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayOddPosition
//  Description :   Display Elements at Odd position
//  Input :         PNODE
//  Output :        void 
//  Author :        Prajwal Sanjay Pansare
//  Date :          31/12/2025
//
//////////////////////////////////////////////////////////////

void DisplayOddPosition(PPNODE Head)
{
    PNODE temp = NULL;

    int iCount = 0;

    temp = *Head;

    while(temp != NULL)
    {
        iCount++;

        if((iCount % 2) != 0)
        {
            printf("| %d |->",temp->Data);
        }
        
        temp = temp->Next;
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 82);
    InsertFirst(&First, 102);
    InsertFirst(&First, 91);

    Display(First);

    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    DisplayOddPosition(&First);

    return 0;
}