#include <stdio.h>
#include <iostream>
#include <time.h>

#define MAX 60
#define BLACK 1
#define RED 0

using namespace std;


struct node 
{
	int key; 
	int color;
	node *l;
	node *r;
	node *p;
};


int randomNumber(int n, int a[]);
int found(int n, int a[], node* NIL);  
int insert(node* NIL, int a);
int insertFix(node* NIL, node* r);
int leftRotate(node* NIL, node* p);
int rightRotate(node* NIL, node* r);
