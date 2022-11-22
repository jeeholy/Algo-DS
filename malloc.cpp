#include<iostream>
#include<cstdlib>
using namespace std;

main(){
	int *ptr = (int*) malloc(sizeof(int));
	*ptr = 2;
	cout << ptr << endl;
	cout << *ptr << endl;
}
