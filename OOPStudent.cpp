#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    string PRN;
    int age;
    float CGPA;


   Student(){}

    Student(string n, string p, int a, float c){
        name = n;
        PRN = p;
        age = a;
        CGPA = c;

    }

    void disp(){
        cout << "Name of Student : "<<name<<endl;
         cout << "PRN of Student : "<<PRN<<endl;
        cout << "Age of Student : "<<age<<endl;
         cout << "CGPA of Student : "<<CGPA<<endl;
         cout<<endl;
                
                

    }
};

int main(){

    Student s1;
    s1.name = "Krushnakant Patil";
    s1.PRN = "124B1B220";
    s1.age = 18;
    s1.CGPA = 9.15;

    s1.disp();

    Student s2 ("Harsh", "124B1B225", 18,8.4);

    s2.disp();
}