#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int target, int& index)
{
    int left = 0;
    int right = size - 1;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            index = mid;
            return true; 
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << mid;
    return false;
}

int main()
{
    // int size;
    // cout << "Enter the Size of Array: ";
    // cin >> size;

     int arr[]={1,4,8,16,25,40,58,78};
    // cout << "Enter the Elements in Array: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }

    // int target;
    // cout << "Enter the Target Element: ";
    // cin >> target;

    int index; 
    if (binarySearch(arr, 8, 2, index))
    {
        cout << "Element is present at index " << index << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}
