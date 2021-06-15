#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	//Pattern Match Using Stack.
	string s;
	cout << "Enter the string pattern using x and y only = ";
	cin >> s;
	stack <char> st;
	int flag=1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='x' && flag==1)
		{
			st.push(s[i]);
		}
		else
		{
			if(!st.empty()){
				flag=0;
				st.pop();
				if(st.empty()){
					flag=1;
				}
			}
		}
	}
	
	if(st.empty()){
		cout<<1<<endl;//If our Stack is empty than its valid ,as the pattern will match and st.pop() will 
		//empty the stack in the end.
	}
	else{
		cout <<0<< endl;//If there is even one char in the stack ,than its invalid .
	}
	
	
	
	
	return 0;
}
