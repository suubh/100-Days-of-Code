#include<bits/stdc++.h>
using namespace std;
void areoccur(string s){
	map <char,int> m;
	for (int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	int count = m[s[0]];
	for (auto &itr: m){
		if(count != itr.second ){
			cout << "false"<<endl;
			//return false;
		}
	}  
	cout << "true" << endl;
	//return true;
}
int main(){
	string s="abacbc";
	areoccur(s);
	return 0;	
}