#include <iostream>
#include <string>
using namespace std;
class boy{
	string name;
	int age;

public:
	boy(string a,int b){	//Here constructor is invoked to initialze memory.
		this -> name=a;
		this -> age=b;
	}
	void display(){
		cout << name << endl;
		cout << age << endl;
	}
};
int main(int argc, char const *argv[])
{
	boy *p=new boy("Shub",21);
	p->display();
	return 0;
}