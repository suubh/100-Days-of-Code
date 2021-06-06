#include<iostream>
#include<string.h>
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
	
}
