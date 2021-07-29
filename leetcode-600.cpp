#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	std::vector<int> v[32];
	int n=0;
	int i=0;
	while(n>0){
		v.push(n%2);
		n = n/2;
		i++;
	}
	
	
	return 0;
}