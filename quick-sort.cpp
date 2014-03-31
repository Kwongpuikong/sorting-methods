#include "quick-sort.h"

/*如同两个机器人在各自的区域找大于key的石头扔向对方。
每人扔一次。
*/
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

/*分治思想：
以key的位置分为前后两部分。
继续让机器人扔石头。
*/
void quick_sort(int a[],int s,int e){

	if(s<e){
	
		int k = partition(a,s,e);
		quick_sort(a,s,k-1);
		quick_sort(a,k+1,e);
	}
}