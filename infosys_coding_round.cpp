#include<bits/stdc++.h>
using namespace std;
void using_pair(int n,int k, int A[], int B[]){
	
	vector< pair<int,int>> v;
	for(int i=0;i<n;i++){
		v.push_back({A[i],B[i]});
	}
	sort(v.begin(),v.end());
	int count=0;
	for(auto itr:v){

		if(k>=itr.first && k>=itr.second){
			count++;
			k = k - itr.first;
		}
	}
	cout << count << endl;
}
int main(){
	int n = 2;
	int k = 10;
	int A[] = {10,100};
	int B[] = {10,100};
	using_pair(n,k,A,B);

	return 0;
}