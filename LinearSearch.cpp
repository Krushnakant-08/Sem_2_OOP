// Name : Krushnakant Patil
// PRN : 124B1B220
// Division : M

#include <iostream>
using namespace std;

void linearSearch(int a[], int n, int search) {
    int count = 0, flag = 0;

    cout << "Element found at index no. : ";
    for (int i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            cout << i << " ";
            flag = 1;
            count++;
        }
    }

    if (flag == 1)
    {
        cout << "\nElement Occurred " << count << " Times" << endl;
    }
    if (flag != 1)
    {
        cout << "Number Not Found" << endl;
    }
}

int main()
{
    int search, n;
    cout << "Enter the size of Array : ";
    cin >> n;

    cout << "Enter Number to be Searched : ";
    cin >> search;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element [" << i << "] : ";
        cin >> a[i];
    }

    linearSearch(a, n, search);
    return 0;
}
