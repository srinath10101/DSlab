#include<stdio.h>
#include "bubble.h"
int main(){
	int a[20],i,n;
	printf("enter the size of list:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubble(a,n);
	printf("the sorted list:");
	display(a,n);
}
