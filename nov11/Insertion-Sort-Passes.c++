#include <iostream>

using namespace std;

int main() {
    int arr[] = {9, 4, 7, 2, 6};
    int size = 5;
    
    cout << "Initial array: ";
    for(int k = 0; k < size; k++) cout << arr[k] << " ";
    cout << "\n\n";

    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        
        
        cout << "After pass " << i << ": ";
        for(int k = 0; k < size; k++) {
            cout << arr[k] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}