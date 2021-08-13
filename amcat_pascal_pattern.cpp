#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int factorial(int a){
	int fact=1;
	while(a>=1){
		fact = fact*a;
		a--;
	}
	return fact;
}
int main(){


	//Pascals Triangle 
	int n=5;
	for(int i=1;i<=n;i++){
		int coeff = 1;
		for(int j=n-i;j>0;j--){
			cout << " " ;
		}
		for(int k=1;k<=i;k++){
			cout << coeff<<" " ;
			coeff = coeff*(i-k)/k;
		}
		cout << endl;
	}
	cout << endl;




	//To print any element present at nth row and mth column - nCm = n!/(n-m)!*m!
	int row=4;	//0 1 2 3 4
	int col=2;	//0 1 2 3 4
	cout << factorial(row)/(factorial(row-col)*factorial(col));
	cout << endl;





	//To print a row only 
	int rowIndex = 2 ;//Print 2nd row only i.e 1 2 1
	vector <int> v;
	for(int i=0;i<=rowIndex;i++){
		v.push_back(1);
		for(int j=i-1;j>=1;--j){
			v[j] = v[j] + v[j-1];
		}
	}
	cout << endl;
	for(int i=0;i< v.size();i++){
		cout << v[i] << " ";
	}





	return 0;
}