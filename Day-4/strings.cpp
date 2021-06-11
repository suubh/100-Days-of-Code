#include<iostream>
#include<string>
using namespace std;
int main(){
	
	string s;
	cin >> s;
	
	//one way
	cout <<s;
	
	//other way
	for(int i=0;i<s.length();i++){
		cout << s[i];
	}
	//USING GETLINE(),PUSH_BACK(),POP_BACK()
	
	
	s.push_back('h');
	cout<< "Added char at the end of the String - "<<s<<endl;
	
//	str.pop_back(); ADDED IN C++11
//	cout << "Deleting the last char from the String - "<<str<<endl; 
	
}
