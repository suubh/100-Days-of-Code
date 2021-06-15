#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Hello{
	//Public and Private are access specifier.
	public:
		//Function inside our class.
		void myname(){
			cout << "Shubham Singh"<<endl;
		}
};
int main(){
	//Creating Object of the Class - Classname Objectname
	Hello obj;
	//Using object to call the functions inside our class.(Using Dot Seperator)
	obj.myname();
	return 0; 
}
