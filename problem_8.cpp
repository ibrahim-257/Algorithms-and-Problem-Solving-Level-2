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

short ReadSingleDigit(string message)
{
    short Digit = 0;
    do
    {
        cout << message << endl;
        cin >> Digit;
    } while (Digit < 0 || Digit >> 9);

    return Digit;
}

int  GetLastDigit(int Number)
{
    return Number % 10;
}

int digitFrequencyInNumber(int digit, int Number)
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

void PrintDigitFrequency(int digit , int Number)
{
    cout << "Digit " << digit << " Frequency is "<< digitFrequencyInNumber(digit, Number) << " Time(s).\n";
}

int main()
{
    int Number = ReadPositiveNumber("Please Enter the main Positive Number:");

    int DigitToCheck = ReadSingleDigit("Please Enter one digit to check:");


    PrintDigitFrequency(DigitToCheck, Number);

    return 0;
}