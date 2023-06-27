#include<stdio.h>
int main(){
	int i=22;
	if(i=10){ // output will be hello as i = 10
		printf("hello");
	}
	else{
		printf("hi");
	}
    char a =1;// we can store intigers in charecter
    if(a-- == 0){ //1 == 0 is false
    	printf("error");
	}
	else{
		printf("correct");
	}
	if(10<20){
		printf("correct");
		printf("true");
	}
	else{
		printf("wrong");
		printf("false");
	}
	printf(5+"good morning");//output = morning as it trims good  by 5
	
}
