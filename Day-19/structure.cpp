#include <iostream>
using namespace std;
//There are important difference between strucure in C and C++
	//1.We can define function inside structure.
	//2.We can inititlaize variables.
	//3.Static variables are allowed.
struct hello
{
	int x=10;
	int arr[10]={1,2,3,4};
	string str="Hello I am noob";
	char c='A';
	void icandothis(){
		cout << "Its me Hello from structure"<<endl;
	}
};
int main(){
	struct hello s1;
	cout << s1.x << endl;
	for(int i=0;i<4;i++){
		cout << s1.arr[i]<<" ";
	}
	cout << endl;
	s1.icandothis();

	return 0;
	
}