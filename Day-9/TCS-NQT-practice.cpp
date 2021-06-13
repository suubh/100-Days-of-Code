#include<iostream>
using namespace std;
int main(){
	float  d=42.195; //length of the race.
	int N;
	float temp;
	cout << "Enter The Number of Racers = ";
	cin >> N;
	cout << "Enter the distances covered by the racers in Marathon = ";
	float arr[N];	//Input float array
	for(int i=0;i<N;i++){
		cin >>arr[i];
	}
	//Now print the Maximum distances covered by 3 highest racers excluding finishers.If there are
	// only one or two racers excluding finishers ,give their distance covered.
	//Brute force approach
	int count=0; 
	for(int i=0;i<N;i++){
		if (arr[i]==d){
			count ++;

		}
	}
	int n=N-count;
	//Sort
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if (arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}	
	}
	//Edge Cases
	if(N-count <=2){
		for(int i=count;i<N;i++){
			cout << arr[i]<<" ";
		}
	}
	else{
		for(int i=count;i<count+3;i++){
			cout << arr[i] << " ";
		}
	}
	return 0;
}
