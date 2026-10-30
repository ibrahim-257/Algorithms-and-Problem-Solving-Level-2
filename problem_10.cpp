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

int ReverseNumber(int Number)
{
   int ReverseNumber = 0;

   while(Number > 0)
   {
    ReverseNumber = ReverseNumber * 10 + GetLastDigit(Number);
    Number /= 10;
   }
   return ReverseNumber;
}

void PrintDigits(int Number)
{
   int Reminder = 0;

   while(Number > 0)
   {
      Reminder = Number % 10;
      Number /= 10;
      cout << Reminder << endl;
   }
}

int main()
{
   PrintDigits(ReverseNumber(ReadPositiveNumber("Enter a Positive Number:")));
    return 0;
}