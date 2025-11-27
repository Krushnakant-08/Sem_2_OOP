#include <iostream>
using namespace std;

class MyClass {
    
    int data;
public:


    
    // Parameterized constructor
    MyClass(int value){
        data = value;
    }
    
    MyClass(){
        data = 0;
    }

    // Copy constructor
    // MyClass(MyClass &obj) {
    //     data = obj.data;
    //     cout << "Copy constructor called!" << endl;
    // }

    // Function to display data
    void display() const {
        cout << "Data: " << data << endl;
    }
};

int main() {
    MyClass obj1(10);       // Parameterized constructor is called
    MyClass obj2;    // Copy constructor is called

    obj1.display();

    obj2.data = 25;
    cout<< obj1.data<<endl;
    cout<< obj2.data;

    return 0;
}
