#include <iostream>
#include <climits>
using namespace std;

int findMin( int numbers[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

int findMax( int numbers[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int min = findMin(numbers, size);
    int max = findMax(numbers, size);

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}
