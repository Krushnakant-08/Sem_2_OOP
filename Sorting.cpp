#include<iostream>
using namespace std;

class Sorting {
    private:
    int arr[100];
    int size;

    public:

    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    void display(){
        for(int i = 0; i< size; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void inputSize(){
        cout<< "Enter the Size of Array : ";
        cin>>size;
    }

    void inputArray(){
        cout<< "Enter the Elements of Array : ";
        for(int i = 0; i< size; i++){
            cin>>arr[i];
        }

    }
    void bubbleSort(){
        for(int i=0; i<size-1; i++){
            for (int j=0; j<size-1-i; j++){
                if(arr[j] > arr[j+1]){
                    // Swap
                   swap(arr[j], arr[j+1]);
                }
            }
        }
    }

    void insertionSort (){
        for(int i=1; i< size; i++){
            int j=i-1;
            int current = arr[i];
            while (j>=0 && arr[j] > current )
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = current;
            
        }
    }

    void selectionSort(){
        for (int i = 0; i < size; i++)
        {
            int small = i;
    
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[small])
                {
                    small = j;
                }
            }
    
           swap(arr[i], arr[small]);
        }
    }
};

int main(){
    Sorting s1;

    //Taking input of Number of Elements 
    s1.inputSize();

    //Taking Elements of Array as input
    s1.inputArray();

    //Bubble Sort
    s1.bubbleSort();

    cout<<"Array after Bubble Sorting : ";
    s1.display();


    Sorting s2;

    //Taking input of Number of Elements 
    s2.inputSize();

    //Taking Elements of Array as input
    s2.inputArray();

    //Selection Sort
    s2.selectionSort();

    cout<<"Array after Selection Sorting : ";
    s2.display();

    Sorting s3;

    //Taking input of Number of Elements 
    s3.inputSize();

    //Taking Elements of Array as input
    s3.inputArray();

    //Insertion Sort
    s3.insertionSort();

    cout<<"Array after Insertion Sorting : ";
    s3.display();
}