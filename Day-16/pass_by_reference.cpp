#include<iostream>
#include<string>
using namespace std;
void swap(int &x,int &y){
	//Reference
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main(){
	int a=10,b=20;
	//directly passing the values
	swap(a,b);
	cout << "a="<<a<<"b="<<b<<endl;
	return 0;
}
