// You are given n activities with their start and finish times. 
// Select the maximum number of activities that can be performed 
// by a single person, assuming that a person can only work on a 
// single activity at a time.
#include<bits/stdc++.h>
using namespace std;
int activityUsingSTL(int s[],int f[], int n){
	//convert to pair 
	vector < pair<int,int> > v ;
	for(int i=0;i<n;i++){
		v.push_back({s[i],f[i]});
	}
	//sort
	sort(v.begin(),v.end());
	int j=-1;
	int count;
	for(auto itr: v){
		if(itr.first > j){
			count++;
			j=itr.second;
		}else if(itr.second <j){
			j=itr.second;
		}
	}
	return count;

}
void printactivity(int s[],int f[],int n){
	int count=0;
	int j=0;
	for(int i=1;i<n;i++){
		if(s[i]>=f[j]){
			count++;
			j=i;
		}
	}
	cout << count <<endl;

}
int main(){
	int n=3;
	int start[n] = {10,12,20};
	int finish[n] = {20,25,30};
	//printactivity(start,finish,n);	//WHEN FINISH TIME IS SORTED
	cout << activityUsingSTL(start,finish,n);
	return 0;
}