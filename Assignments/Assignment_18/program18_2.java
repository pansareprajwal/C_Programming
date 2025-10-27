class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : printEvenNumbers
    //  Description   : To print Even numbres up to N
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void printEvenNumbers(int n)
    {
        int iCnt = 0;
        int iFreq = 0;

        for(iCnt = 2; iCnt <= n; iCnt+=2)
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

class program18_2
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}
