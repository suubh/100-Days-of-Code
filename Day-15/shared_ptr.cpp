#include<iostream>
#include<memory> // For shared_ptr 
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

	shared_ptr<Rectangle> obj1(new Rectangle(10,80));//SHARED POINTER -Ptr1
	obj1->area();

	shared_ptr<Rectangle> obj2;	//Ptr2
	obj2=obj1;
	obj2->area();


}