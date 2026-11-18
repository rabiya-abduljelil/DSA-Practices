#include <iostream>

using namespace std;

int main() {
    int arr[] = {8, 3, 17, 5, 11};
    int size = 5;
    int target = 17;
    int comparisons = 0;
    
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == target) {
            break;
        }
    }
    
    cout << "Comparisons made: " << comparisons << "\n";
    return 0;
}