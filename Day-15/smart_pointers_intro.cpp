#include<iostream>
#include<string>
using namespace std;
class SmartPtr{

	int* p;//Pointer
public:
	//Constructor
	explicit SmartPtr(int* ptr=NULL){
		p=ptr;
	}
	//Destructor
	~SmartPtr(){
		delete(p);
	}
	//Overloading operator
	int& operator*(){
		return *p;
	}
};

int main(){
	//USE POINTER ,DESTRUCTER(deletes an object when it goes out of scope) and OVERLOADED OPERATORS(* and ->)
	SmartPtr p(new int());
	*p=20;
	cout << *p <<endl;
	return 0;
}