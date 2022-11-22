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
	two->info = 2;
	three->info = 3;
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	cout << one->info << endl;	
	cout << two->info << endl;	
	cout << three->info << endl;	
}
