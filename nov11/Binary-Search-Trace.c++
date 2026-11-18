#include <iostream>

using namespace std;

int main() {
    int arr[] = {2, 5, 9, 13, 18, 25, 31, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 25, low = 0, high = size - 1, comparisons = 0;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        comparisons++;
        if (arr[mid] == target) {
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    cout << "Comparisons made: " << comparisons << "\n";
    return 0;
}