#include<stdio.h>
#include<math.h>

//RECURSION - when a function calls itself, its called recursion

//prints helloworld 5 times using recursion
void printHW(int count);

//prints sum of n natural numbers using recursion
int  sum(int n);

//factorial of n using recusion
int fact(int f);


//-----------------------------------------------------------------

int main(){
	//printHW(5); 

//Qs30 sum of first n natural numbers - recursion
 
 //printf("sum is : %d",sum(10));
 
/* int fact;
 printf("enter the number : ");
 scanf("%d",&fact);
 printf("fact is : %d",fact);*/
 
 //prints helloworld 5 times using recursion
 //printHW(5);
 
//prints sum of n natural numbers using recursion
//printf("sum is : %d",sum(5));

printf("factorial of n : %d",fact(5));	
	
	return 0;
}
//---------------------------------------------------------------------



//recursive function
//prints helloworld 5 times using recursion
void printHW(int count){
	if(count==0){ //base case
		return;
	}
printf("hello world\n");
printHW(count-1);
}

//prints sum of n natural numbers using recursion
int sum(int n){
	//base case
	if(n==1){
		return 1;
	}
	 
	 int sumNm1 = sum(n-1); //sum of 1 to n
	 int sumN = sumNm1 + n;
	 return sumN;
}

//factorial of n using recusion
int fact(int n){
	//base case
	if(n==0){
		return 1;
	}
	 
	int factNm1 = fact(n-1); //fact of 1 to n
	int factN = factNm1 * n;
	return factN;
}









