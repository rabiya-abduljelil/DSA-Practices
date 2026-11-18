#include <iostream>
#include <iomanip>
using namespace std;

void binary_search(int list[], int key, int size){
	
	int left=0;
	int right=size-1;
	int found=0;
	do{
		int mid = (left+ right)/ 2;
		if (list[mid] == key){
			found=1;
			cout<<"Item is found";
			break;
		}
		else if (key<list[mid]){
			right = mid - 1;
		}
		else{
		    left = mid + 1;
		}
		
	}
	while(found==0 && left<right);
	
	if(found == 0){
		cout<<"Item not found";
	}
}


int main(){
    int list[]={1,2,3,4,5,6};
    int key;
    cout<<"Please Enter Number/ Target = ";
    cin>>key;
    int size = sizeof(list)/sizeof(list[0]);
    binary_search(list,key);

    return 0;
}