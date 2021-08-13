#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n = 121;
	int temp = n;
	int reverse = 0;
	int r;
	while(n>0){
		r = n%10;
		reverse = reverse*10 + r;
		n = n/10;
	}
	if(temp == reverse){
		cout << temp << " is a Pallindrome " <<endl;
	}
	else {
		cout << "No" <<endl;
	}
	return 0;
}