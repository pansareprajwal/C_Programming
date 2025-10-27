class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : reverseNumber
    //  Description   : To reverse the number
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void reverseNumber(int num)
    {
        if(num < 0)
        {
            num = -num;
        }

        int iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            num = num/10;
            System.out.print(iDigit);
        }
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program16_4
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}
