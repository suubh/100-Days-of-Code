#include <iostream>
using namespace std;
bool isArmstrong(int n){
	int temp = n;
	int sum = 0;
	int r;
	while(n>0){
		r = n%10;
		n = n/10;			
		sum = sum + (r*r*r);	
	}
	if(sum == temp){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	//Armstrong number is a number that is equal to the sum of the cubes of its digits
	// 153 = 1^3 + 5^3 + 3^3 = 1+125+27 = 153
	
	//Question 1 - Check a number is Armstrong or not.
	int n = 153;
	int temp = n;
	int sum = 0;
	int r;
	while(n>0){
		r = n%10;				//1st Iter, r = 3 		2nd Iter, r = 5 		3rd Iter, r = 1
		n = n/10;				//n=15 					n = 1 					n = 0
		sum = sum + (r*r*r);	// sum = 3^3 			sum = 27 + 5^3 			sum = 27 + 125 + 1^3 = 153
	}
	if(sum == temp){
		cout <<  temp << " is an Armstrong Number" <<endl;
	}
	else {
		cout << temp << " is not an Armstrong Number" << endl;
	}


	// Question 2 - Printing Armstrong Number within a range.

	int a = 1;
	int b = 500;
	for(int i=a;i<b;i++){
		if(isArmstrong(i)){
			cout << i << " ";
		}
	}
	return 0;
}