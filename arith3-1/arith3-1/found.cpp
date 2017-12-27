#include "LINK.h"

int found(int n, int a[], node* NIL)
{ 
	node *p;
	p = (node*)malloc(sizeof(node));
	p->p = p->l = p->r = NIL;
	p->key = a[0];
	p->color = BLACK;
	NIL->l = NIL->r = p;
	for (int i = 1; i < n; i++)
	{
		if (insert(NIL, a[i]))
		{
			cout << "insert error" << endl << "number " << i << endl;
			return(1);
		}
	}
	return(0);
}

int insert(node* NIL, int a)
{
	node *p, *q ,*r;
	q = NIL;
	p = NIL->l;
	r = (node*)malloc(sizeof(node));
	r->key = a;
	while (p != NIL)
	{
		q = p;
		if (r->key < p->key)
			p = p->l;
		else
			p = p->r;
	}
	r->p = q;
	if (q != NIL && r->key < q->key)
		q->l = r;
	else
		q->r = r;
	r->l = r->r = NIL;
	r->color = RED;
	insertFix(NIL, r);

	return(0);
}

int insertFix(node* NIL, node* r)
{
	node *p, *q;
	while(r->p->color == RED)
	{
		if (r->p == r->p->p->l)
		{
			q = r->p->p->r;
			if (q->color = RED)
			{
				r->p->color = BLACK;
				q->color = BLACK;
				r->p->p->color = RED;
				r = r->p->p;
			}
			else if (r == r->p->r)
			{
				r = r->p;
				leftRotate(NIL, r);
			}
			r->p->color = BLACK;
			r->p->p->color = RED;
			rightRotate(NIL, r);
		}
	}
	return (0);
}

int leftRotate(node* NIL, node* p)
{
	node *q;
	q = p->r;
	p->r = q->l;
	if (q->l != NIL)
		q->l->p = p;
	q->p = p->p;
	if (p->p == NIL)
		NIL->l = NIL->r = q;
	else if (p == p->p->l)
		p->p->l = q;
	else
		p->p->r = q;
	q->l = p;
	p->p = q;
	return(0);
}

int rightRotate(node* NIL, node* r)
{
	return(0);
}