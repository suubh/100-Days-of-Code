#include<iostream>
#include<string>
using namespace std;
int main(){
//	You are given a string s of x and y.
//	You need to verify whether the string follows the pattern x^ny^n. 
//	That is the string is valid only if equal number of ys follow equal number of xs.

	string str;
	cout << "Enter your string of x and y only = ";
	cin>>str;
	int count_x=0,count_y=0;
	for (int i=0;i<str.length();i++){
		if(str[i]=='x'){
			count_x++;
		}
		if(str[i]=='y'){
			count_y++;
		}
	}
	if(count_x==count_y){
		cout<<"Valid"<<endl;
	}
	else{
		cout <<"Invalid"<<endl;
	}
	
	return 0;
}
