#include <iostream>
using namespace std;

class Prime
{
    int num;

public:
    Prime(int n)
    {
        num = n;
    }

    void isprime()
    {

        bool isPrime = true;

        if (num == 0 || num == 1)
        {
            isPrime = false;
        }

        for (int i = 2; i <= num / 2; i++)
        {

            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " is a prime number"<<endl;
        }
        else
        {
            cout << num << " is not a prime number"<<endl;
        }
    }
};

int main()
{

    Prime n1(5);
    n1.isprime();

    Prime n2(13);
    n2.isprime();

    Prime n3(28);
    n3.isprime();
}