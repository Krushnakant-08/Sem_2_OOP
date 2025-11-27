#include <iostream>
#include <fstream>
using namespace std;

int main() {

   fstream file("D:/VS Code/fil.txt", ios::out | ios::in);

   file<<"Hello how are you"<<endl;
   file<<"getline";
   file.close();
    return 0;
}