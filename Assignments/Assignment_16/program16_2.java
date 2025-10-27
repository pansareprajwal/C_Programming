class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : checkEvenOdd
    //  Description   : To check whether a given number is even or odd
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void checkEvenOdd(int num)
    {
        if((num % 2) == 0)
        {
            System.out.print("It is Even number");
        }
        else
        {
            System.out.print("It is Odd number");
        }
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program16_2
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);
    }
}
