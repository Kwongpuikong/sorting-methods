#include "insert-sort.h"

void insert(int a[],int i,int j){

	int tmp = a[i];
	for(int k=i;k>j;k--){
		
		a[k] = a[k-1];
	}
	a[j] = tmp;
}

void insert_sort(int a[],int size){

	for(int i=1;i<size;i++){
	
		for(int j=i-1;j>=0;j--){
		
			if(a[i]<a[j] && a[i]>a[j-1]){
			
				insert(a,i,j);
			}
		}
	}
}