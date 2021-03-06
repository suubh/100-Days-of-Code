#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};

Node *insert(int data,Node *head){
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){	//Case of empty linked list
		head = temp;
	}else{
	Node *temp1 = head;
	while(temp1->next != NULL){
		temp1 = temp1->next;
	}
	temp1->next = temp;}
	return head;
}

//-------------------RECURSION-----------------------//
void reverse(Node *l){
	if(l->next == NULL){
		head = l;
		return;
	}
	reverse(l->next); 
	Node *temp = l->next;
	temp ->next = l;
	l->next = NULL;

}
//-------------------RECURSION-----------------------//

void print(Node *l){
	if(l == NULL){
		return;
	}
	cout << l->data << " ";
	print(l->next);
}


int main(){
	Node *head = NULL;	//Local
	head = insert(2,head);
	head = insert(4,head);
	head = insert(8,head);
	head = insert(9,head);
	print(head);
	
	reverse(head);
	cout << endl;
	print(head);
	return 0;
}