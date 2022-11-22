#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	int info;
	struct node *next;
};

struct node *first, *last;
struct node *p;

//from head
void insertFirst(int infoNew){
	struct node *tmp = (struct node*) malloc(sizeof(struct node));
	tmp->info = infoNew;
	tmp->next = first;
	first = tmp;	
}

//from end
//slower than insertLast2 function
void insertLast1(int infoNew){
	struct node *tmp = (struct node*) malloc(sizeof(struct node));
	tmp->info = infoNew;
	tmp->next = NULL;
	p = first;
	while(p->next != NULL)
		p = p->next; // next node
	p->next = tmp;	
}

//from tail
void insertLast2(int infoNew){
	struct node *tmp = (struct node*) malloc(sizeof(struct node));
	tmp->info = infoNew;
	tmp->next = NULL;
	last->next = tmp;
	last = tmp;	
}

void deleteFirst(){
	struct node *tmp;
	tmp = first;
	first = tmp->next; //first = first->next;
	free(tmp);
}

void deleteLast(){
	struct node *tmp;
	tmp = first;
	while(tmp->next != last) //before last node
		tmp = tmp->next;
	last = tmp;
	last->next = NULL;
	free(tmp->next);
}

int main()
{
	int count = 0;
	struct node *one = (struct node*) malloc(sizeof(struct node));
	struct node *two = (struct node*) malloc(sizeof(struct node));
	struct node *three = (struct node*) malloc(sizeof(struct node));
	
	struct node *tmp;
	
	one->info = 1;
	two->info = 2;
	three->info = 3;
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	first = one;
	last = three;
	
	int infoNew;
	cin >> infoNew;
	insertFirst(infoNew);
	insertLast1(infoNew);
	insertLast2(infoNew);
	deleteFirst();
	deleteLast();
	
	
	tmp = first; //initial node
	//output info of linked list from first to last
	while(tmp != NULL){
		cout << tmp->info << endl;
		tmp = tmp->next;
		count++;
	}
	cout << "There " << count << " linkedlist" << endl;
}
