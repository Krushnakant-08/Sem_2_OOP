#include <iostream> 
using namespace std; 
 
struct Person 
{ 
    string first_name; 
    string last_name; 
    int age; 
}; 
 
int main() 
{ 
    Person p1; 
     
    cout << "Enter first name: "; 
    cin >> p1.first_name; 
    cout << "Enter last name: "; 
    cin >> p1.last_name; 
    cout << "Enter age: "; 
    cin >> p1.age; 
 

    cout << "\nDisplaying Information." << endl; 
    cout << "First Name: " << p1.first_name << endl; 
    cout << "Last Name: " << p1.last_name << endl; 
    cout << "Age: " << p1.age; 
 
    return 0; 
}