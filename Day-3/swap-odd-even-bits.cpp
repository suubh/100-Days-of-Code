#include<iostream>
using namespace std;
int main(){
	//SWAP ODD AND EVEN BITS - USING BIT MANIPULATION
	int n=23;
	int mask2=0x55555555;
	int mask1=0xAAAAAAAA;
	// Seperate even bits
	int even_bits=n&mask1;
	//Seperate odd bits
	int odd_bits=n&mask2;
	//right shift to even_bits
	int a = even_bits>>1;
	//left shift to odd_bits
	int b = odd_bits<<1;
	//Do xor 
	int ans=a^b;
	cout << ans;
}
