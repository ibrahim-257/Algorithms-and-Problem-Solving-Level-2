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

int SumOfDigits(int Number)
{
     if(Number == 0)
     return 0;
    if(Number < 0)
        Number *= -1;

    int Sum = 0;

    while(Number > 0)
    {
        Sum += GetLastDigit(Number);
        Number /= 10;
    }
    return Sum;
}
void printSumOfDigits(int Number)
{
    cout << "Sum Of Digits = " << SumOfDigits(Number) << endl;
}

int main()
{
    printSumOfDigits(ReadPositiveNumber("Please Enter a Positive Number"));

    return 0;
}