#include<iostream>
using namespace std;
int main(){
	int a=20;
	int *ptr;
	ptr = &a;//Now this will point to the address of "a" and will point to it , so the 
			// value of *ptr will be 20;
	cout << "Check *ptr = "<< *ptr<<endl;
	cout << "Check a = "<<a<<endl;
	cout << "Check ptr = "<< ptr<<endl;

	//ARRAYS AND POINTERS 
	int arr[3]={4,5,6};
	int *p;
	p=arr;
	cout << "First Element = "<< p[0] <<" Second Element = " << p[1] <<" Third Element = " << p[2]<<endl;

	for (int i=0;i<3;i++){
		cout << p <<endl; //Address
		cout << *p <<endl;//4,5,6
		p++; //pointer increment 
	}

	//STRINGS
	char *str="cpp";
	char x=*(str+1);
	char y=str[1];
	cout << x <<" "<< y << endl;
}