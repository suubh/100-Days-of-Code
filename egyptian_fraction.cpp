#include<bits/stdc++.h>
using namespace std;
void egypt(int n, int d){
	if(n==0 || d==0){
		return;
	}

	if(d%n == 0){
		cout << "1/" << d/n;
		return ;
	}

	if(n%d == 0){
		cout << n/d;
		return ;
	}

	// if(n > d){
	// 	cout << n/d << " + ";
	// 	egypt(n%d,d);
	// }
	//ceil
	int temp=d/n+1;
	cout << "1/" << temp << " + " ;
	egypt(n*temp-d,d*temp);



	
}
int main(){
	int n = 12;
	int d = 13;
	egypt(n,d);
	return 0;
}