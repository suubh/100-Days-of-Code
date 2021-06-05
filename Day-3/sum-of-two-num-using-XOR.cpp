#include<iostream>
using namespace std;
int sumoftwo(int a ,int b){
	int add,carry;
	//1.Do XOR to add
	add=a^b;
	//2.Do AND and left shift to add carry.
	carry=(a&b)<<1;
	//3.Recurse unitl no carry is left.
	return sumoftwo(add,carry);
}
int main(){
	//Sum of two numbers without using arithmetic operator and in O(1)
	int a,b;
	cout << "Enter any two number to add = ";
	cin >> a;
	cin >> b;
	cout << sumoftwo(a,b);
	return 0;
}
