#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin >> a[i]; //input elements of array
	}
	
	for(int i=0; i<n; i++)
	{
		int element = a[i]; //currrent element to consider
		int j=i; //max times of consider 
		while(j>0 && a[j-1]>element)
		{
			a[j]=a[j-1];
			j--;	
		}
		a[j]=element;
	}
	for(int i=0; i<n; i++)
	{
		cout << a[i] << " "; //output sorted array
	}
	return 0;
}
