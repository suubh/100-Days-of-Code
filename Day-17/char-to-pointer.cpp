#include <iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	char arr[]="abc";// -'a' 'b' 'c' '/0'
	char *ptr ="abc";// -'a' 'b' 'c'

	cout << arr << endl;		// abc
	cout << *ptr << endl; 		//a

	return 0;
}