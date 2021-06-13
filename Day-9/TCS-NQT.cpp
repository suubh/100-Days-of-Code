#include<iostream>
using namespace std;
int main(){
	char *name[]={"abc","def","hello","jkl"};
	cout << *name[2]+1<<endl;
	
	int arr[]={5,4,3};
	for(int i=0;i<3;i++){
		cout <<arr[i]<<" ";
	}
	return 0;
}
