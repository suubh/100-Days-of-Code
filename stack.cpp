#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int top = -1;

void push(int x){
	if(top == 100-1){
		cout << "Stack Overflow !" <<endl;
		return;
	}
	top=top+1;
	arr[top] = x;
}
void pop(){
	if(top==-1){
		cout << "Stack is Empty !" << endl;
		return;
	}
	top =top-1;
}
int isEmpty(){
	if(top == 0){
		return true;
	}
	
		return false;
	
}
int tops(){
	return arr[top];
}
int main()
{
	push(4);
	push(6);
	push(1);
	cout << tops()<<endl;
	cout << isEmpty() <<endl;	//0 as False
	pop();
	cout << tops() <<endl;
	return 0;
}