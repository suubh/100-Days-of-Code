#include<iostream>
#include<string>
using namespace std;
int main(){
	//Array of  string 
	//Method 1 
	char *str[3]={"Hi","Hello","Bye"};
	for(int i=0;i<3;i++){
		cout << str[i];
	}
	//Method 2
	char s[3][10]={"Hi","Hello","Bye"};
	for(int i=0;i<3;i++){
		cout << s[i];
	}
	
	return 0;
}
