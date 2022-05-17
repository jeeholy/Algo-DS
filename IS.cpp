#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	
	for(int i=0; i<n; i++)
	{
		int ele = a[i];
		int j=i;
		while(j>0 && a[j-1]>ele)
		{
			a[j]=a[j-1];
			j--;	
		}
		a[j]=ele;
	}
	for(int i=0; i<n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
