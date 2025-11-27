#include <iostream>
using namespace std;

class Sdigit
{
    int a;

public:
    Sdigit(int num)
    {
        a = num;
    }

    void SumOfDigit()
    {
        int n = a;
        int sum = 0;
        while (n != 0)
        {
            int dig = n % 10;
            n = n / 10;
            sum += dig;
        }
        printf("Sum of Digits of %d number is : %d\n", a, sum);
    }
};

int main()
{

    Sdigit num1(25);
    num1.SumOfDigit();

    Sdigit num2(1234);
    num2.SumOfDigit();
}