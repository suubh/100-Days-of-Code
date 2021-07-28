#include<bits/stdc++.h>
using namespace std;
int main(){
	int n = 5;
	int arr[n]={5, 6, 2, 4, 3};
	
	sort(arr,arr+n);
	int count = 0;
	for(int i=n-1;i>=1;i--){
		arr[i] = arr[i] - i;
		count ++;
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " " ;
	}
	cout << endl;
	cout << "Min Operation = " << count <<endl;
	return 0;
}