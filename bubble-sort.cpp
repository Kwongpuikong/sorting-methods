#include "bubble-sort.h"

void exchange(int &a,int &b){

	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort(int array[],int size){

	int i,j;
	for(i=0;i<size;i++){
	
		for(j=i+1;j<size;j++){
		
			if(array[i]>array[j])
				exchange(array[i],array[j]);
		}
	}
}
