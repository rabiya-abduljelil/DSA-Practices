#include <iostream>
#include <algorithm> 

using namespace std;

void optimizedBubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {9, 4, 7, 2, 6};
    int size = 5;

    optimizedBubbleSort(arr, size);

    cout << "Sorted numbers: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}