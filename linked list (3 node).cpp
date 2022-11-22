#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	int info;
	struct node *next;
};

main()
{
	struct node *one = (struct node*) malloc(sizeof(struct node));
	struct node *two = (struct node*) malloc(sizeof(struct node));
	struct node *three = (struct node*) malloc(sizeof(struct node));
	one->info = 1;
	one->next = two;
	two->info = 2;
	two->next = three;
	three->info = 3;
	three->next = NULL;
	
	cout << one->info << endl;	
	cout << two->info << endl;	
	cout << three->info << endl;	
}
