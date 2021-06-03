#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout << "Enter any number : ";
	cin >> n;
	//Printing table of that number in reverse
	int i=10;
	while(i){
		cout << n*i<<" ";
		i--;
	}
	
	//Checking a Number is prime or not
	for(int i=2;i<sqrt(n);i++){
		//n is prime if it is not divisible by any i 
		if(n%i != 0){
			cout << n << " is  a prime number";
		}
		else{
			cout << n << " is not a prime number";
		}
	}
	
	return 0;
}
