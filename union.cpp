#include <iostream> 
using namespace std; 
 
union Student { 
    int age; 
    char grade; 
    float GPA; 
}; 
 
int main() 
{ 
 
    union Student student1; 
 
   
    student1.age = 25; 
    student1.grade = 'B'; 
    student1.GPA = 4.5; 


    cout << "Age : "<< student1.age << endl; 
    cout << "Grade : " << student1.grade << endl; 
    cout << "GPA : " << student1.GPA << endl; 

    cout<<"\n"<<endl;
    // union  Student student2;

    // student2.age = 18;
    // student2.grade = 'A';
    // student2.GPA = 5.5;
    
    // cout << "Age : " << student2.age << endl; 
    // cout << "Grade : " << student2.grade << endl; 
    // cout << "GPA : " << student2.GPA << endl; 


    return 0; 
}