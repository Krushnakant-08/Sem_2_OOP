#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }

    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{

    int num;

cout<<"Enter Number :";
cin>> num;


    if(isPrime(num)){
        cout<<num<<" is a prime number";
        }
        else{
        cout<<num<<" is not a prime number";
        }
}