//915. Partition Array into Disjoint Intervals
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums = {40,58,42,76,30,48,79,91};
	int n=nums.size();
	// int m = count(nums.begin(),nums.end(),nums[0]);
 //        if(n == m){
 //            cout << 1 << endl;
 //        }
    
	int count=0;
    int min=100000;
    for(int i=0;i<n;i++){
       for(int j=n-1;j>=0;j--){
            if(nums[i]<=nums[j]){
            		// cout << nums[i] << " " << nums[j] <<endl;
                    count++;
                    // cout << count << " " <<endl;;
                    
            }
            else{
            	break;
            }
        }
        if(count<min){
            min=count;
        }
        // cout << "min" << min << " " << endl;
    }
  	if(min == n){
                    	cout << 1 << endl;
                    }
    cout << n-min <<endl;

}