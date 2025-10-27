class Logic
{

    //////////////////////////////////////////////////////////////
    //
    //  Function name : checkPrime
    //  Description   : To check the number is prime or not
    //  Input         : int
    //  Output        : void
    //  Author        : Prajwal Sanjay Pansare
    //  Date          : 27/10/2025
    //
    //////////////////////////////////////////////////////////////

    void checkPrime(int num)
    {
        int iCnt = 0;
        int iFreq = 0;

        for(iCnt = 2; iCnt <= num/2; iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iFreq++;
            }
        }

        if(iFreq == 0)
        {
            System.out.print("It is prime number");
        }
        else
        {
            System.out.print("It is not prime number");
        }
        
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

class program18_1
{
    public static void main(String argu[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}
