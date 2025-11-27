#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("file.txt");
    if(!file){
    cout<<"Error in opening";
    return -1;
    }
    int count = 0;
    char str;
    while(file>>str){
        cout<<str<<" ";
    }
    cout<<count;

    file.close();
}
