#include<iostream>
using namespace std;

int main(){
	//Given a number X and two positions (from right side) in binary representation of x,
	//write a program that swaps N bits at given two positions and returns the result.
	unsigned int x,p1,p2,n;
	cout<<"Enter the Value of X = ";
	cin>>x;
	cout<<"Enter the position 1 = ";
	cin>>p1;
	cout<<"Enter the position 2 = ";
	cin>>p2;
	cout<<"Enter the value of N = ";
	cin>>n;
	unsigned int set1=(x>>p1) & ((1U<<n)-1);
	unsigned int set2=(x>>p2) & ((1U<<n)-1);
	unsigned int val=set1^set2;
	val=(val<<p1) | (val<<p2);
	unsigned int ans=x^val;

	cout<< ans;	
	
	return 0;
}
