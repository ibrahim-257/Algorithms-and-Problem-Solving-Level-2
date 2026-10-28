#include <iostream>
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

void PrintPerfectNumbersFrom1ToN(int N)
{
    for(int i = 1; i<=N; i++)
    {
        if(isPerfectNumber(i))
            cout << "Number [" << i << "] is Perfect\n";
    }
}
int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please Enter Positive Number"));

    return 0;
}