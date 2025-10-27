class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : checkPalindrome
    //  Description   : To get check the number is palindrome or not
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void checkPalindrome(int num)
    {
        int iValue = 0;
        int iDigit = 0;
        int iRev = 0;

        iValue = num;
        while(num != 0)
        {
            iDigit = num % 10;
            iRev = (iRev*10) + iDigit;
            num = num / 10;
        }

        if(iValue == iRev)
        {
            System.out.print("Number is Palindrome");
        }
        else
        {
            System.out.print("Number is not Palindrome");
        }
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program17_2
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}
