#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Hello{
	//Creating Variables inside our class .
	public:
		//Now to use that variable outside the class,but using functions.
		void setmyvar(string x){
			name=x;
		}
		string getmyvar(){
			return name ;
		}
	private:
		string name; //A good practice to make variables private .
};
int main(){
	
	Hello obj;
	obj.setmyvar("Shubham Singh");
	cout <<obj.getmyvar();
	return 0; 
}
