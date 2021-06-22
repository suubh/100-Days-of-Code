#include<iostream>
using namespace std;
int main(){
	int arr[4]={1,2,3,4};
	int *ptr=arr;
	cout << *ptr <<endl; //1
	cout << ptr <<endl;  //Address
	return 0;

}