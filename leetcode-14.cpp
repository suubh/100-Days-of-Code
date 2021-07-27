//LONGEST COMMON PREFIX
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> strs;
	string ans="";
	strs = {"flower","flow","flight"};
	sort(strs.begin(),strs.end());
	int n = strs.size();
	

	string first = strs[0];
	string last = strs[n-1];
	//we have to check only upto the length of first .

	for(int i=0;i<first.size();i++){
		if(first[i] == last[i]){
			ans+=first[i];
		}
		else{
			break;
		}
	}
	cout << ans <<endl;
}