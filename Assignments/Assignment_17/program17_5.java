class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : printTable
    //  Description   : To get display the table of the number
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void printTable(int num)
    {
        int iCnt = 0;
        int iTable = 0;

        for(iCnt = 1, iTable = num; iCnt <= 10; iCnt++)
        {
            System.out.print(" "+ num*iCnt);
        }
        
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program17_5
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}
