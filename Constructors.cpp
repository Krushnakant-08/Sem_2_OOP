#include <iostream>
using namespace std;

class Student
{
public:
    int rno;
    string name;
    double fee;

public:
    Student(int,string,double);
    Student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        getchar();
        cout << "Enter the Name:";
        getline(cin,name);
        cout << "Enter the Fee:";
        cin >> fee;
    }

    void display()
    {
        cout << endl <<"Roll No. : " << rno << "\t" << "Name : " << name << "\t" << "Fees : " << fee;
    }
};

Student::Student(int roll, string nam, double fe){
    rno = roll;
    name = nam;
    fee = fe;
}

int main(){

    Student s1;
    s1.display();

    Student s2(7,"Pushkar Deshpande",28000);
    s2.display();

    Student s3 (s2);
    s3.display();

}