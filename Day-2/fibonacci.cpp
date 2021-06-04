#include<iostream>
using namespace std;

int fibonacci(int n){
	if(n<=1){
		return n;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int a=0,b=1;
	int temp,n;
	
	//Print Fibonacci upto n
	cout<<"Enter any number = ";
	cin>>n;	
	cout << a <<" "<< b ;
	for(int i=1;i<n;i++){
		temp=a+b;
		cout <<" "<< temp <<" ";
		a=b;
		b=temp;
	}
	
	//Print nth Fibonacci Number
	cout << endl << fibonacci(n);
	
	return 0;
}
