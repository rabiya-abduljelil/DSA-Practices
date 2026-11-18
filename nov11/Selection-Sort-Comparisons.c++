#include <iostream>

using namespace std;

int main() {
    int n = 10, total_comparisons = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        total_comparisons += (n - 1 - i);
    }
    
    cout << "Comparisons: " << total_comparisons << "\n";
    return 0;
}