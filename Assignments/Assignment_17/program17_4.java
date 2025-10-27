class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : findMin
    //  Description   : To get the minimum number between three numbers
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void findMin(int a, int b, int c)
    {
        
        if((a < b) && (a < c))
        {
            System.out.print("Minimum number is "+a);
        }
        else if((b < a) && (b < c))
        {
            System.out.print("Minimum number is "+b);
        }
        else
        {
            System.out.print("Minimum number is "+c);
        }
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program17_4
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}
