#include <iostream>
using namespace std;

class Circle{

    int radi;
public:
    Circle(int r){
        radi = r;
    }

    void area(){
        cout<< "the area of circlr with radius "<<radi<< " is : "<<radi*radi*3.142;
    }

};

int main(){

    Circle c1(6);

    c1.area();
}