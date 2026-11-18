#include <iostream>
using namespace std;    

void selection_sort(int list[], int size){
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    cout << "Sorted numbers: ";
    for (i = 0; i < size; i++)
        cout << list[i] << " ";
    cout << endl;
}}


int main() {
    int list[]={4,6,2,1,10,5};
    int size = sizeof(list)/sizeof(list[0]);
    selection_sort(list, size);
    return 0;
}