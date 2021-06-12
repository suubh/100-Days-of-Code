#include<iostream>
#include<string>
using namespace std;
int main(){
	//Reverse a string 
	string str;
	cout <<"Enter a String = ";
	cin>>str;
	cout << "The Reverse of the string is = ";
	for(int i=str.length();i>=0;i--){
		cout << str[i];
	}
	
	
	return 0;
}
