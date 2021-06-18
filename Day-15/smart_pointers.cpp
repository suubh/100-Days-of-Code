#include<iostream>
#include<string>
using namespace std;
class Rectangle{
	private:
		int l;
		int b;
};
void fun(){
		Rectangle* p=new Rectangle();//p is a pointer and points to the obj of the class which will have
									// l and b.
									//Also p is a local variable ,once function call is done 
									//it will be deleted but the the new Rectangle() will not 	
}									//be deallocated from the heap memory.
int main(){

	while(1){						//But as the loop is infinite and the function is 
		fun();						//kept calling so new object is created again and again.
	}								//And this will results in lack of heap memory and program
	return 0;						//can be crash . 
									//delete(p) CAN BE USED . 
}


//THIS LED TO THE INTRODUCTION OF SMART POINTERS WHICH PROVIDE DEALLOCATE FROM THE HEAP MEMORY 
//AND PREVENT MEMORY LEAK AND CRASH .