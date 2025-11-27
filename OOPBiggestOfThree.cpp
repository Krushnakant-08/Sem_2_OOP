#include<iostream>
using namespace std;

class number
{
private:
        int a;
        int b;
        int c;

public:

number(int aa, int bb, int cc){
    a = aa;
    b = bb;
    c = cc;
}


void input(){
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
}

void disp(){

    if (a > b && a > c)
    {
       cout << a << " is the Largest Number";
    }
    else if (b > c)
    {
        cout << b << " is the Largest Number";
    }
    else
    {
       cout << c << " is the Largest Number";
    }
}
};

int main(){

    number j;
    j.input();
    j.disp();

    number k

    k.disp();

}