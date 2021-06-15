#include<iostream>
#include<string>
using namespace std;
class Hello{
	//Constructors - A constructors is a function that automatically gets called as soon as we creat the Object 
	//				 of the class.
	//					* Never have a return type 
	//					* Same name as of the class
	public:
		Hello(string z){
			cout << "U cant ignore me !"<<endl;
			//The main use of constructor is to give the variables initial values.
			 setName(z);//it will set the name which we give in main while creating object.
		}
		void setName(string x){
			name=x;
		}
		string getName(){
			return name;
		}
	private:
		string name;
};
int main(){
	Hello obj("Shubham Singh");
	cout << obj.getName();
	return 0;
}
