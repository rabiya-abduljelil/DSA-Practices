#include <iostream>
#include <algorithm> 

using namespace std;

void bubbleSortWithFlag(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false; 
        
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; 
            }
        }
        
        if (!swapped) {
            cout << "Sorted mid way " << (i + 1) << "\n";
            break;
        }
    }
}

int main() {
    int arr[] = {4,2,8,4,10,11,12,13};
    int size = 8;

    bubbleSortWithFlag(arr, size);

    cout << "Sorted list: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}