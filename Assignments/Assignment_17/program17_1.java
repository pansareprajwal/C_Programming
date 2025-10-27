class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : sumDigits
    //  Description   : To get Additon of the digits
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void sumDigits(int num)
    {
        if(num < 0)
        {
            num = -num;
        }

        int iDigit = 0;
        int iSum = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            num = num/10;
            iSum = iSum + iDigit;
        }
        System.out.print("Sum of digits : "+iSum);
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program17_1
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.sumDigits(4567);
    }
}
