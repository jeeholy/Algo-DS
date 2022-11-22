#include<iostream>
using namespace std;

main(){
	int a;
	int *ptr;
	a = 10;
	ptr = &a;
	cout << "a: " << a << endl;
	cout << "ptr: " << ptr << endl;
	cout << "*ptr: " << *ptr << endl;
	
	(*ptr)++;
	cout << "a: " << a << endl;
	cout << "ptr: " << ptr << endl;
	cout << "*ptr: " << *ptr << endl;
}
