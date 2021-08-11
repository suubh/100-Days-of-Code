#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
};
struct Node *head;	//Global
Node *getNewNode(int x){
	Node *newNode = new Node();
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}
void insertAtHead(int x){
	Node *temp = getNewNode(x);	//new node
	if(head == NULL){
		head = temp;
		return;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;
}
void print(){
	Node *temp = head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}
int main(){
	head = NULL;
	insertAtHead(2);
	insertAtHead(4);
	insertAtHead(5);
	print();
	return 0;
}