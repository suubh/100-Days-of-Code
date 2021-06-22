#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

	//pointer-variable = new data-type(value)
	int *ptr = new int(10);

	//pointer-variable = new data-type[size]
	int *ptr1 = new int[100];
	//Block of Array 

	cout << *ptr <<endl; //10
	cout << *ptr1 << endl; //0
    
	return 0;
}