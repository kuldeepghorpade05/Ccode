#include<stdio.h>
#include<stdlib.h>

void  square (int n);

void _square(int *n);

void swap(int a, int b);
void _swap(int *a, int *b);

void printaddress(int n);

void dowork(int a, int b, int *sum, int *prod, int *avg);




int main(){
	
	//int age = 22;  //simple variable
	//int *ptr = &age;  //pointer variable storing address of age
//	int _age = *ptr;
	
//	printf("%d",_age);
	
	
	
	//ADDRESS
//printf("%p\n",&age);
//printf("%u\n",&age);

//printf("%u\n",ptr);
//printf("%u\n",&ptr); 
	
//printf("%d",*ptr);



       //VALUE
//printf("%d\n",age); //==>22
//printf("%d\n",*ptr); //==>22
//printf("%d\n",*(&age)); //==>22
 
//practice Q36
/*int *ptr;
int x;

ptr=&x;
*ptr=0;
  
printf("x = %d\n",x);
printf(" *ptr = %d\n",*ptr);

*ptr +=5;

printf("x = %d\n",x);
printf(" *ptr = %d\n",*ptr);

(*ptr)++;

printf("x = %d\n",x);
printf(" *ptr = %d\n",*ptr);*/


//pointer to pointer 
/*float i = 50;
float *ptr = &i;
float **pptr = &ptr;

printf("%f",**pptr);*/ 

//int number = 4;

//call by value
/*square(number);	 
printf("%d\n",number);*/

//printf("\n");

//call by reference
/*_square(&number);
printf("%d\n",number);*/

//practice Q38 - swap 2 numbers a and b

/*int x=3, y=5;

swap(x,y);
printf("x = %d & y = %d\n",x,y);

_swap(&x,&y);
printf("x = %d & y = %d\n",x,y);*/


//Q39 will the address output be same
/*int n = 4;

printf("%u\n",&n);
printaddress(n);*/

/* Q40 write a function to calculate the sum,
 product and average of 2 numbers. print that 
 average in the main function */

/*int a=3, b=5;
int sum, prod, avg;

dowork(a,b,&sum,&prod,&avg);
printf("%d,%d,%d",sum,prod,avg);*/
	

//write a program in c to find the maximum number between two numbers using a pointer
	
int fno=23;
int sno=45;  
int *ptr1=&fno;
int *ptr2=&sno;

if(*ptr1>*ptr2){
	printf("%d",*ptr1);
}else{
	printf("%d",*ptr2);
}	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

//call by value
void  square (int n){
	n=n*n;
	printf("%d\n",n);
}

//call by refrence
void _square(int *n){
	*n = (*n) * (*n);
	printf("%d\n",*n);
	
	}

void swap(int a, int b){
	int t=a;
	a=b;
	b=t;
	printf("a = %d & b = %d\n",a,b);
}

void _swap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;   
}

void printaddress(int n){
	printf("%u\n",&n);
}


void dowork(int a, int b, int *sum, int *prod, int *avg){

	 *sum=a+b;
	 *prod=a*b;
	 *avg =(a+b)/2;
}



