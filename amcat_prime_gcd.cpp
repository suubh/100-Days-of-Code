#include<iostream>
using namespace std;
bool isPrime(int n){
	if (n<=1){
		return false;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	if(a==0){
		return b;
	}
	return gcd(b,a%b);
}
int main(){
	//For GCD
	cout << gcd(4,8) <<endl;

	//For Prime NUM -> O(n^2)
	int n=50;
	for(int i=2;i<50;i++){
		if(isPrime(i)){
			cout << i << " ";
		}
	}
	
	return 0;
}