#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	
};
struct Node *head ;	//global var

void insert(int x, int n){
	Node *temp1 = new Node;
	temp1->data = x;
	temp1->next = NULL;
	if( n == 1){
		temp1->next = head; //Initially head have the addr of NULL so our new node i.e temp1 will point to NULL now.
		head = temp1;	//head got the address of temp1.
		return;
	}

	//start from head and traverse to (n-2)th pos.
	Node *temp2 = head ;
	for(int i=0;i<n-2 ;i++){
		temp2 = temp2->next;
	}

	//Now link 
	temp1->next = temp2->next;
	temp2->next = temp1;

}
void reverse (){
	Node *prev = NULL;
	Node *current = head;
	Node *temp;
	while(current!=NULL){
		temp = current->next;
		current -> next = prev;
		prev = current;
		current = temp;
	}
	head = prev;

	
}
void print(){
	Node *temp = head;
	while(temp!=NULL){
		cout << temp->data <<" ";
		temp = temp->next;
	} 
	cout << endl;
}
int main(){
	head = NULL;	//Inititally empty list 
	insert(2,1);
	insert(3,2);
	insert(4,3);
	insert(6,4);
	print();
	cout << "After Reverse : " << endl;
	reverse();
	print();
	return 0;
}