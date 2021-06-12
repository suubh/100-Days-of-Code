#include<iostream>
#include<math.h>
using namespace std;
int main(){
//	Given an array arr of N elements. The task is to count all the subsets whose sum is even.
//
//	Example:
//
//	Input:
//	N = 3
//	arr[] = 1 2 3
//	
//	Output:
//	3
//	Explanation:
//		
//	Three subsets are there whose sum of elements 
//	is even. Subsets are (3, 2, 1), (1, 3), (2).
	
	int n;
	cout <<"Enter the value of n = ";
	cin >> n;
	int arr[n];
	cout << "Enter the values of array = ";
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int sum=0,count=0;
	for(int i=1;i<pow(2,n);i++){
		sum=0;
		for(int j=0;j<n;j++){
			if((i>>j)&1){
				sum+=arr[j];
			}	
		}
		if(sum%2==0){
			count++;
		}
	}
	cout << count <<endl;
	return 0;
}
