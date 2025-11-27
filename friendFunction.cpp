#include <iostream>
using namespace std;

class Box
{

private:
    int length;

public:
    Box(int len){
        length = len;
    }
    friend int printLength(Box); 
};

int printLength(Box b)
{
    b.length += 10;
    return b.length;
}

int main()
{
    Box a(12);
    cout << "Length of box: " << printLength(a) << endl;

    Box b(22);
    cout << "Length of box: " << printLength(b) << endl;
   
}