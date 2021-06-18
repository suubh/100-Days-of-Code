#include<iostream>
#include<string>
using namespace std;
void swap(int *x,int *y){

	//Here x and y are pointers.

	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a =45,b=100;

	swap(&a,&b);//Providing the address of the vars

	cout << "a="<<a<< "b="<<b<<endl;
	return 0;
}
//Most Commonly Used