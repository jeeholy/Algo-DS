#include<iostream>
#include<cstdlib>
using namespace std;

main(){
	int *ptr = (int*) malloc(sizeof(int));
	cin >> *ptr;
	cout << ptr << endl;
	cout << *ptr << endl;
}
