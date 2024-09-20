#include<stdio.h>
int main(){
	
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	
	char grade;
	grade = marks>92?'A': marks>80?'B': marks>70?'c': marks>60?'D': marks>50?'E':'F';
	printf("youregrade is %c ",grade);
	
	
	
	
	
	switch(grade){
		case'A':
			printf("you are perfect ");
			break;
		case'B':
		    printf("you are good ");
			break;
		case'C':
		    printf("you are pass ");	
			break;
		case'D':
		    printf("you are pass ");
		    break;
		case'E':
		    printf("you are pass ");	
		    break;
		case'F':
		    printf("you are fail ");  
		    break;
			  
				
	}
	if(grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='E'){
	printf("congratulation,You are eligible for the next level ");
	}
	else {
		printf(" Please try again next time");
	}
	
	

}
