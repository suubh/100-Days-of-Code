#include<iostream>
using namespace std;
int main(){
	int arr[100]={1,2,2,3,4,1};
	for(int i=0;i<=6-1;i++){
		for(int j=i;j<=6-1;j++){
			cout << arr[j] << " ";
		}
		cout << endl;
	}
	return 0;
}