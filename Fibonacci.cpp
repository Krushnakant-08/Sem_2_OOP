#include <iostream>
using namespace std;

class Fibonacci
{

    int terms;

public:
    Fibonacci(int a)
    {
        terms = a;
    }

    void printFibonacci()
    {
       long long int s = 0, a = 0, b = 1;
        cout << a << " " << b<<" ";
        for (int i = 3; i <= terms; i++)
        {

            s = a + b;
            a = b;
            b = s;
            cout << s<<" ";
        }
        cout<<endl;
    }
};

int main(){

    Fibonacci ser1(7);
    ser1.printFibonacci();

    Fibonacci ser2(9);
    ser2.printFibonacci();

    Fibonacci ser3(93);
    ser3.printFibonacci();
}