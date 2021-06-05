#include<iostream>
using namespace std;
int main(){
	//Count the number of one's in the binary representation of a number .
	// n=6
	// In binary its 110
	// So output should be 2 (as there are two one's)
	//Repeat two steps - (i)find the remainder when n is divided by 2
	//					 (ii)divide n by 2
	cout <<"Enter any number = ";
	int n;
	cin>>n;
	int temp,count=0;
	while(n>=1){
	
		temp=n%2;
		if(temp==1){
			count++;
		}
		n=n/2;
	}
	cout << "Number of one's = "<<count<<endl; 
	return 0;
}
