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

int CountDigitFrequency(short digit, int Number)
{
    int DigitCount = 0;

    while(Number > 0)
    {
        if(GetLastDigit(Number) == digit)
            DigitCount++;
        Number /= 10;
    }
    return DigitCount;
}

void PrintAllDigitFrequency(int Number)
{
    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        short DigitFrequency = CountDigitFrequency(i, Number);

        if(DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s)\n";
        }
    }

}

int main()
{
    PrintAllDigitFrequency(ReadPositiveNumber("Enter a positive number:"));

    return 0;
}