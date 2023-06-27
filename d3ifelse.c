#include<stdio.h>
int main(){
	int i;
	printf("enter age= ");
	scanf("%d",&i);
	if(i<18){
		printf("the voter is not eligible");
	}
	else{
		printf("eligible");
	}
}
