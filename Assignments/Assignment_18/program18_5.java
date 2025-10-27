class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : checkSign
    //  Description   : To check the number is negative, positive or zero
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void checkSign(int num)
    {
        if(num == 0)
        {
            System.out.print("Number is Zero");
        }
        else if(num < 0)
        {
            System.out.print("Number is Negative");
        }
        else
        {
            System.out.print("Number is Positive");
        }
        
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program18_5
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}
