#include <iostream>
using namespace std;
int main(){

	//delete pointer-variable
	int *p=new int (34);
	cout << "Value of p is = "<< *p <<endl; //34

	//free the allocated memory
	delete p;
	cout << "Value of p is = "<< *p <<endl; //0

	return 0;
}