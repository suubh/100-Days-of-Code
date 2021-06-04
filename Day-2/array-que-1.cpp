#include<iostream>
using namespace std;
int XOR(int arr[],int n){
	int a=arr[0];
	for(int i=1;i<n;i++){
		a=a^arr[i];
	}
	cout << "Using XOR approach = "<<a<<endl;
}
int main(){
	//Find the element that appear only once in an array
	//1.We can use XOR --> As XOR of a number with itself is 0 and XOR of any number with 0 is number itself.
	// i.e 4^4=0
	//     4^0=4
	//2.Iterative approach -->Use two loops which will give O(n^2).
	
	int arr[]={1,2,3,4,1,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<n;i++){
		int count=0;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count==0){
			cout<<"The number which appear only once is = "<<arr[i]<<endl;
			break;
		}
	}
	
	XOR(arr,n);
	return 0;
}
