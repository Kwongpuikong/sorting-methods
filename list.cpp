#include "list.h"


list::list(void){

	header = (ptrnode)malloc(sizeof(node));
	header->next = NULL;
	header->data = 0;
}

list::list(int a[],int size){

	header = (ptrnode)malloc(sizeof(node));
	header->next = NULL;
	header->data = 0;

	for(int i=0;i<size;i++){
	
		push_back(a[i]);
	}
}


list::~list(void){

	position p,tmp;
	p = header;
	while(p!=NULL){
	
		tmp = p->next;
		free(p);
		p = tmp;
	}
}

bool list::isEmpty(){

	return (header->next == NULL);
}

bool list::isLast(position p){

	return (p->next == NULL);
}

position list::find(int x){

	position p = header->next;
	while(p!=NULL && p->data!=x){

		p = p->next;
	}
	return p;

}

position list::previous(int x){

	position p = header;
	while(p->next!=NULL && p->next->data!=x){
	
		p = p->next;
	}
	return p;
}

position list::previous(ptrnode p){

	position ptr = header;
	while(ptr->next!=NULL && ptr->next->next != p){
	
		ptr = ptr->next;
	}
	return ptr;
}

void list::del(int x){

	position p = previous(x);
	position tmp;
	if(!isLast(p)){
	
		tmp = p->next;
		p->next = tmp->next;
		free(tmp);
		(header->data)--;
	}
	
}

bool list::insert(int x,position p){

	ptrnode cell = (ptrnode)malloc(sizeof(node));

	if(cell == NULL){
		
		return false;
	}
	cell->data = x;
	cell->next = p->next;
	p->next = cell;
	(header->data)++;
	return true;
}

int list::length(){

	return header->data;
}

void list::push_back(int x){

	ptrnode cell = (ptrnode)malloc(sizeof(node));
	ptrnode p = end();
	cell->data = x;
	cell->next = NULL;
	p->next = cell;
	(header->data)++;
}

ptrnode list::end(){

	ptrnode p = header;

	while(p->next != NULL)
		p = p->next;

	return p;
}

void list::print(){

	ptrnode p = header->next;
	for(int i=0;i<header->data;i++){
	
		printf("->%d",p->data);
		p = p->next;
	}
	printf("\n");
}

void list::insert_sort(){

	ptrnode p = header->next->next;
	ptrnode pre = previous(p);
	int size = header->data;
}


