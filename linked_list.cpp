//INSERT AT THE BEGINNING OF THE LINKED LIST
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
struct Node *head; //Global,Only pointer
void insert(int x){
	Node *temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if(head!=NULL){
		temp->next = head;
	}
	head = temp;
}
void print(){
	Node *temp = head;
	while(head!=NULL){
		cout << temp->data << " ";
		temp = temp -> next;
	}
}
int main(){
	head = NULL;
	cout << "Enter the total num in list : " << endl;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cout << "Enter the Number: " ;
		insert(n);
		print();
	}
	return 0;
}