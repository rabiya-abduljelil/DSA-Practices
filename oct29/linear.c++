#include <iostream>
#include <iomanip>
using namespace std;

void linear_searching(int list[], int key){
	int found=0;
    for (int i=0; i<=6; i++){
        if(key==list[i]){
            found=1;
            cout<<"It is found at index: " <<i;
            break;
        }
    }
    if(found==0){
		cout<<"Item is not found";
	}
}


int main(){
    int list[]={1,2,3,4,5,6};
    int key;
    cout<<"Please Enter Number/ Target = ";
    cin>>key;
    linear_searching(list,key);

    return 0;
}