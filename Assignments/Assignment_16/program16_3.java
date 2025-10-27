class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : findFactorial
    //  Description   : To check whether a given number is even or odd
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void findFactorial(int num)
    {
        int iCnt = 0;
        int iFact = 0;

        iFact = 1;
        for(iCnt = 1; iCnt < num; iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iFact *= iCnt;
            }
            
        }
        System.out.print("Factorial is : " + iFact);
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program16_3
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.findFactorial(10);
    }
}
