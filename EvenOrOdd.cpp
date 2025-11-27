#include <iostream>

using namespace std;

bool isEven(int n){

    if(n%2 ==0){
        return true;

    }
    else{
        return false;
    }
}

int main(){

    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    if(isEven(n))
    cout<<n<<" is Even Number";
    else
    cout<<n<<" is Odd Number";

}

