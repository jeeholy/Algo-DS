#include<iostream>
#include<cstdlib>
using namespace std;

main(){
	int *ptr = (int*) malloc(5*sizeof(int));
	for(int i = 0; i < 5; i++)
		cin >> ptr[i];
	for(int i = 0; i < 5; i++){
		cout << "ptr[" << i << "] = " << ptr[i] << ", *(ptr+i) = " << *(ptr+i) << endl;
	}
}
