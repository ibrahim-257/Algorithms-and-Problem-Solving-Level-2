#include<iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
   int Number = 0;
   do
   {
    cout << message << endl;
    cin >> Number;
   } while (Number <= 0);

   return Number;
}

bool isPerfectNumber(int Number)
{
    int SumAllDivisors = 0;

    for(int i = 1; i<= Number/2; i++)
    {
       if(Number % i == 0)
       {
        SumAllDivisors += i;
       } 
    }

    if(SumAllDivisors == Number)
        return true;
    else
        return false;

}

int main()
{

   int Number = ReadPositiveNumber("Please Enter a Positive Number");

   if(isPerfectNumber(Number))
    cout << "Number [" << Number << "] is Perfect.\n";
    else
        cout << "Number [" << Number << "] is NOT Perfect.\n";
    return 0;
}