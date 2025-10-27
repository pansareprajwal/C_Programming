class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : printOddNumbers
    //  Description   : To print Odd numbres up to N
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void printOddNumbers(int n)
    {
        int iCnt = 0;
        int iFreq = 0;

        for(iCnt = 1; iCnt <= n; iCnt+=2)
        {
           System.out.print(iCnt+" "); 
        }
        
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program18_3
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}
