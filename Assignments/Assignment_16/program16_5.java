class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : countDigits
    //  Description   : To counting the digits of the numbers
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void countDigits(int num)
    {
        if(num < 0)
        {
            num = -num;
        }

        int iCnt = 0;

        while(num != 0)
        {
            num = num/10;
            iCnt++;
        }
        System.out.print("Total digits : "+iCnt);
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program16_5
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}
