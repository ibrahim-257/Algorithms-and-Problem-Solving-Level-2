#include<iostream>
using namespace std;

bool isPrime(int num)
{
    if(num <= 1)
        return false;
    for(int i = 2; i<= num/2; i++)
    {
        if(num % i == 0)
            return false;   
    }
    return true;
}
void printPrimeNumbersFrom1ToN(int N)
{

    for(int i = 1;i <= N; i++)
    {
        if(isPrime(i))
            cout<<i<<endl;
    }
}

int main()
{
    int UserNumber = 0;

    cout<<"Please enter a number : ";
    cin>> UserNumber;

    cout<<endl;
    printPrimeNumbersFrom1ToN(UserNumber);

    return 0;
}