#include<stdio.h>
int main(){
	int i;
	printf("%d",scanf("%d",&i)); //output = 1 as printf counts the number of variable i.e. %d
	int j=213,k =432;
	printf("%d",printf("%d %d ",j,k));
	int l=0;
	if(l){
		printf("hello");
	}
	else{
		printf("hi");
	}
}
