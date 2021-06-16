#include<iostream>
#include<string>
using namespace std;

class Myclass{
	private:
		int x;//A private variable with the same name.
	public:
		void setmyvar(int x){
			this-> x=x;	//this->  : It is a special type of pointer.
		}
		void getmyvar(){
			cout << "x= "<<x<<endl;
		}
};
int main(){
	
	Myclass obj;
	int x=8;
	obj.setmyvar(x);
	obj.getmyvar();
	return 0;
}
