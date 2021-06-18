#include<iostream>
#include<memory> // For unique_ptr 
using namespace std;
class Rectangle{
private:
	int length;
	int breadth;
public:
	//using constructor to declare the private variables .
	Rectangle(int l,int b){
		length=l;
		breadth=b;
	}
	void area(){
		cout << "Area = " << length*breadth << endl;
	}
};
int main(){
	unique_ptr<Rectangle> obj(new Rectangle(10,80));//UNIQUE_PTR
	obj->area();
}