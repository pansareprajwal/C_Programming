class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : findmax
    //  Description   : To get the maximum number between two numbers
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void findmax(int a, int b)
    {
        
        if(a > b)
        {
            System.out.print("Maximum number is "+a);
        }
        else
        {
            System.out.print("Maximum number is "+b);
        }
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program17_3
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.findmax(20, 15);
    }
}
