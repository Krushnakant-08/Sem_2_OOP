#include <iostream>

// using namespace std;

void LargestOfThree(int a, int b, int c){

      if (a > b && a > c)
    {
       std:: cout << a << " is the Largest Number";
    }
    else if (b > c)
    {
        std::cout << b << " is the Largest Number";
    }
    else
    {
       std:: cout << c << " is the Largest Number";
    }

}

int main()
{

    int a, b, c;
   std:: cout << "Enter any Three Numbers : ";
   std:: cin >> a >> b >> c;

    LargestOfThree(a,b,c);

    return 0;
}