class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : sumEvenOddDigts
    //  Description   : To print sum of even and odd separetely
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void sumEvenOddDigts(int num)
    {
        int iDigit = 0;
        int iEven = 0;
        int iOdd = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            num = num / 10;
            if((iDigit % 2) == 0) 
            {
                iEven += iDigit;
            }
            else 
            {
                iOdd += iDigit;
            }
        }
        System.out.print("Summation of Even : "+iEven+"\n");
        System.out.print("Summation of Odd : "+iOdd+"\n");
        
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program18_4
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigts(345678);
    }
}
