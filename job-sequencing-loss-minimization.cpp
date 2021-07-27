#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define all(c) c.begin(),c.end()
typedef pair<int, pair<int, int> > job;

bool cmp(job a ,job b){
	int a_L,a_T,b_L,b_T;
	a_L = a.second.first;	//a
	a_T = a.second.second;	//b
	b_L = b.second.first;	//c
	b_T = b.second.second;	//d
	return (a_L*b_T > a_T*b_L);
}

void printsolution(int L[], int T[], int n){
	vector < job >  Job;

	//now push L and T in the vector with job id.
	for(int i=0;i<n;i++){
		Job.push_back({i+1,{L[i],T[i]}});
	}

	//sort 
	stable_sort(all(Job),cmp);

	//print
	for(int i=0;i<n;i++){
		cout << Job[i].first << " ";
	}

}
int main(){
	int n = 4;					//No of Jobs
	int T[n] = {4,1000,2,5};	//Time Taken
	int L[n] = {3,1,2,4};		//Loss 
	printsolution(L,T,n);
	return 0; 
}