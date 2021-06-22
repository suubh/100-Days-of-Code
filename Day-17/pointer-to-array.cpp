#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[5]={1,2,3,4,5};
	int *ptr1=arr; //POINTER POINTING TO ONLY THE FIRST ELEMENT OF THE ARRAY 
	int (*ptr2)[5]=&arr; //POINTING TO THE ENTIRE ADDRESS.

	cout << ptr1 <<endl;
	cout << ptr2 <<endl;

	cout << *ptr1 <<endl;
	cout << *ptr2 <<endl;

	return 0;

}