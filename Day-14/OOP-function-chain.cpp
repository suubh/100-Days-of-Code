#include<iostream>
#include<string>
using namespace std;

class Myclass{
	private:
		int x;
		int y;
	public:
		Myclass(int x=0,int y=0){	//CONSTRUCTOR
			this->x=x;				//this->  : It is a special type of pointer.
			this->y=y;
		}
		Myclass &setX(int a){
			x=a;
			return *this;
		}
		Myclass &setY(int b){
			y=b;
			return *this;
		}
		void getmyvar(){
			cout << "x= "<<x<<endl;
			cout << "y= "<<y<<endl;
		}
};
int main(){
	
	Myclass obj(8,29);
	obj.setX(10).setY(20);
	obj.getmyvar();
	return 0;
}
