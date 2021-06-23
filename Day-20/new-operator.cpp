#include <iostream>
#include <string>
using namespace std;
class boy{
	string name;
	int age;

public:
	boy(string a,int b){ //HERE THE CONSTRUCUTOR IS NOT INVOKED
		this -> name=a;
		this -> age=b;
	}
	void display(){
		cout << name << endl;
		cout << age << endl;
	}
	void *operator new(size_t size){
		void  *p=malloc(size);
		return p;
	}
	void operator delete(void *ptr){
		free(ptr);
	}
};
int main(int argc, char const *argv[])
{
	boy *p=new boy("Shub",21);
	p->display();
	delete p;
	return 0;
}