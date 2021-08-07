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
void print(Node *l){
	if(l == NULL){
		return;
	}
	cout << l->data << " ";
	print(l->next);
}
void printReverse(Node *l){
	if(l==NULL){
		return;
	}
	printReverse(l->next);
	cout << l->data <<" ";
}

int main(){
	Node *head = NULL;	//Local
	head = insert(2,head);
	head = insert(4,head);
	head = insert(8,head);
	head = insert(9,head);
	print(head);
	cout << endl;
	printReverse(head);
	return 0;
}