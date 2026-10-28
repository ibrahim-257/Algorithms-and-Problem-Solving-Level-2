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

int  GetLastDigit(int Number)
{
    return Number % 10;
}
void PrintDigitsInReversedOrder(int Number)
{
    if(Number == 0)
        cout <<Number << endl;
    if(Number < 0)
        Number *= -1;

    while(Number > 0)
    {
        cout << GetLastDigit(Number) << endl;
        Number /= 10;
    }
}
    
int main()
{
    PrintDigitsInReversedOrder(ReadPositiveNumber("Please Enter a Positive Number :"));

    return 0;
}