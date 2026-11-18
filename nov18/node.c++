#include <iostream>
using namespace std;

struct Node{
    string name;
    int age;
    float cgpa;
    string department;
    string grade;

    Node *next;
};
Node *head = NULL;

int main(){
	
    Node *temp = new Node;
    if (head==NULL){
		head=temp;
	}
    
    cout<<"Enter your info..." <<endl;
    cin>>temp->name;
    cin>>temp->age;
    cin>>temp->cgpa;
    cin>>temp->department;
    cin>>temp->grade;
    

    Node *temp2 = new Node;
    
    cout<<"Enter your friends info..." <<endl;
    cin>>temp2->name;
    cin>>temp2->age;
    cin>>temp2->cgpa;
    cin>>temp2->department;
    cin>>temp2->grade;
    
    temp->next = temp2;
    temp2->next = NULL;
    
    cout<<"Here are the nodes that are created"<<endl;
    while(temp!=NULL){


		cout<<temp->name<<endl;
		cout<<temp->age<<endl;
		cout<<temp->cgpa<<endl;
		cout<<temp->department<<endl;
		cout<<temp->grade<<endl;
		
		temp = temp->next;
		
	}
    
}