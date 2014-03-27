#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node,*position,*ptrnode;

class list{
public:
	list(void);
	list(int a[],int size);
	~list(void);
	
	bool isEmpty();
	bool isLast(position p);
	position find(int x);
	void del(int x);
	position previous(int x);
	position previous(ptrnode p);
	bool insert(int x,position p);
	int length();
	void push_back(int x);
	ptrnode end();
	void print();
	void insert_sort();

private:
	position header;
};

