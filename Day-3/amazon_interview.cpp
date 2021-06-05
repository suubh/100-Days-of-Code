#include<iostream>
using namespace std;
int findones(int n){
	int temp,count=0;
	while(n>=1){
		temp=n%2;
		if(temp==1){
			count++;
		}
		n=n/2;
	}
	return count;
}
int main(){
	//Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n.
	int n,sum=0;
	cout<<"Enter any number n = ";
	cin>>n;
	//Time Complexity = O(n)
	//Try to do in O(logn)
	while(n>0){
		sum+=findones(n);
		n--;
	}
	cout<<"Total set bits = "<<sum<<endl;
	return 0;
}
