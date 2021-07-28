//USING STL	
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


struct node{
	char data;							// A B D E
	unsigned freq;						// 4 3 6 1
	node *left, *right;

	node(char data, unsigned freq){
		left = right = NULL;
		this -> data = data;
		this -> freq = freq;
	}
};


struct compare{
	bool operator()(node* l ,node* r ){
		return (l->freq > r->freq);
	}
};


void print(struct node* root, string str){
	if(!root){
		return ;
	}
	if(root->data != '$'){
		cout  << str << " ";
	}
	print(root->left,str + "0");
	print(root->right,str + "1");
}


void huffman(char data[],int freq[], int size){
	
	struct node *left, *right, *top;

	priority_queue< node*, vector<node*>, compare> minHeap;
	for(int i=0;i<size;i++){
		minHeap.push( new node(data[i],freq[i]));
	}

	while(minHeap.size()!=1){
		//Taking minimum frequencies
		left = minHeap.top();
		minHeap.pop();
		right = minHeap.top();
		minHeap.pop();
		//Adding there sum as root.
		top = new node('$', left->freq + right->freq);
		top->left = left;
		top->right = right;
		minHeap.push(top);
	}
	print(minHeap.top(),"");

}

int main(){
	int size = 6;
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
    huffman(arr,freq,size);
	return 0;
}