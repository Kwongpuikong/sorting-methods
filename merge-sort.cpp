#include "merge-sort.h"

void merge(int array1[],int array2[],int dest[],int size1,int size2){

	//dest.size = array1.size+array2.size;
	//size1 = array1.size
	//size2 = array2.size;

	int i,j,k;
	for(i=0,j=0,k=0;i<size1&&j<size2;k++){
	
		if(array1[i]<=array2[j]){
		
			dest[k] = array1[i++];
		}
		else if(array1[i]>array2[j]){
		
			dest[k] = array2[j++];
		}
	}

	if(i<size1){
	
		for(int m=i;m<size1;m++){
		
			dest[k++] = array1[m];
		}
	}
	else{
	
		for(int m=j;m<size2;m++){
		
			dest[k++] = array2[m];
		}
	}
	
}

void merge_sort(int a[],int dest[],int size){

	if(size==1)
		dest[0] = a[0];
	else{
		int* tmp1 = (int*)malloc(sizeof(int)*size/2);
		int* tmp2 = (int*)malloc(sizeof(int)*(size-(size/2)));
		merge_sort(a,tmp1,size/2);
		merge_sort(a+size/2,tmp2,size-(size/2));
		merge(tmp1,tmp2,dest,size/2,size-(size/2));
		free(tmp1);
		free(tmp2);
	}
}

