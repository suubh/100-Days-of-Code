#include<iostream>
#include<math.h>
using namespace std;
int main(){
	//SUBSET ARRAY SUM BY GENERATING ALL THE SUBSETS
	
	int n,s;
	cout << "Enter the value of n - "<<endl;
	cin>>n;
	int arr[n];
	cout << "Enter the value in Array - "<<endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << "Enter the Sum required = "<<endl;
	cin >> s;
	
	//GENERATE ALL THE SUBSEQUENCE ,CHECK THE CONDITION .
	for(int i=1;i<pow(2,n);i++){	
		int sum=0;
		for(int j=0;j<n;j++){
			if((i>>j)&1){
				sum+=arr[j];
			}
				if(sum ==s){
					cout << "Yes"<<endl;
				}
		}
	}

	
	
	return 0;
}
