#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str = "abcdesfgh";
	vector<char> vow = {'a','e','i','o','u','A','E','I','O','U'};

	for(int i=0;i<str.length();i++){
		if(find(vow.begin(), vow.end(),str[i]) !=  vow.end()){
			str = str.replace(i,1,"");
			i = i-1;
		}
	}
	cout << str;
	return 0;
}