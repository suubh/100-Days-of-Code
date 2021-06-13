#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cout << "Enter the value of N = ";
	cin >> N;
	int arr[N];
	cout << "Enter the value inside the array = ";
	for(int i=0;i<N;i++){
		cin >> arr[i];
	}
	if(N <4){
		cout << "Invalid Output !"<< endl;
	}
	else{
		//Make quadraples (P,Q,R,S) where 0<P<Q<R<S<N.
		// Find maxiumum of arr[P]*arr[Q]*arr[R]*arr[S] in all the quadraples and return .
		
		//Brute Force - It will be O(n^4) ,which is stupid.
		
		int maxx,ans=0;
		for(int i=0;i<N-3;i++){
			for(int j=i+1;j<N-2;j++){
				for(int k=j+1;k<N-1;k++){
					for(int l=k+1;l<N;l++){
						maxx=arr[i]*arr[j]*arr[k]*arr[l];	
						if(maxx>ans){
							ans=maxx;
						}
					}
				}
			}
			
		}
		cout<< ans << endl;
		
		// Better Method - O(nlogn)
		//1.Sort the array in ascending order 
		//2.Find the product of last four element 
		//3.Find the product of first four element 
		//4.Find the product of first two and last two element
		//5.Find max of 2,3,4. 
		//*Sounds Good,dont know how !*
		
		sort(arr,arr+N);
		int x=arr[N-1]*arr[N-2]*arr[N-3]*arr[N-4];
		int y=arr[0]*arr[1]*arr[2]*arr[3];
		int z=arr[0]*arr[1]*arr[N-4]*arr[N-3];
		
		int result=max(x,max(y,z));
		cout << result << endl ;
		
		
	}
	return 0;
}
