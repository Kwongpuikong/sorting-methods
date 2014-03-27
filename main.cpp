#include "merge-sort.h"
#include "bubble-sort.h"
#include "insert-sort.h"
#include "quick-sort.h"


void main(){

	//merge-sort....
	/*int a[] = {10,9,8,7,6,5,4,3,2,1};
	int dest[10];
	merge_sort(a,dest,10);
	for(int i=0;i<10;i++){

		printf("->%d\n",dest[i]);
	}
	while(1);*/
	
	//bubble-sort...
	/*int a[] = {10,9,8,7,6,5,4,3,2,1};
	bubble_sort(a,10);
	for(int i=0;i<10;i++){
	
		printf("->%d\n",a[i]);
	}*/

	//insert-sort...
	/*int a[] = {1,3,2,4,5,10,8,9,7,6};
	insert_sort(a,10);

	for(int i=0;i<10;i++){
	
		printf("->%d",a[i]);
	}
	printf("\n");*/

	//quick-sort...
	int a[] = {1,3,2,4,5,10,8,9,7,6};
	

	for(int i=0;i<10;i++){
	
		printf("->%d",a[i]);
	}
	printf("\n");
}