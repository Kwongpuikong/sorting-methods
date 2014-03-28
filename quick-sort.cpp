#include "quick-sort.h"

int partition(int a[],int s,int e){

	int i = s;
	int j = e;
	int key = a[i];
	
	while(i<j){
	
		while(a[j]>=key && j>i)
			j--;
		a[i] = a[j];
		while(a[i]<=key && i<j)
			i++;
		a[j] = a[i];
	}

	a[i] = key;
	return i;
}

void quick_sort(int a[],int s,int e){

	if(s<e){
	
		int k = partition(a,s,e);
		quick_sort(a,s,k-1);
		quick_sort(a,k+1,e);
	}
}