//Templates are used to defining a function which 
//can be used multiple times in the program 
//irrespective of the data type.
#include<iostream>
using namespace std;

template <class T>//DEFINING TEMPLATE FUNCTION
void bubblesort(T arr[],int n){
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int arr[100]={3,5,1,6,2};
	int n=5;

	bubblesort<int>(arr,n);//CALLS TEMPLATE FUNCTION
	
	for (int i=0;i<n;i++){
		cout << arr[i] << " " ;
	}
	return 0;
}