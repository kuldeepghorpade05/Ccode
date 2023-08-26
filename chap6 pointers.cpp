#include<stdio.h>

int main(){
	
	//int age = 22;  //simple variable
	//int *ptr = &age;  //pointer variable storing address of age
	//int _age = *ptr;
	
	//printf("%d",_age);
	
	//ADDRESS
//printf("%p\n",&age);//==>real pointer address
//printf("%u\n",&age);
//	
//printf("%u\n",ptr);
//printf("%u\n",&ptr);
//	
//printf("%d",*ptr);

       //VALUE
//printf("%d\n",age); //==>22
//printf("%d\n",*ptr); //==>22
//printf("%d\n",*(&age)); //==>22


/*int *ptr;
int x;

ptr=&x;
*ptr=0;

printf("x = %d\n",x);        //==> 0
printf(" *ptr = %d\n",*ptr); //==> 0

*ptr +=5;

printf("x = %d\n",x);        //==> 5
printf(" *ptr = %d\n",*ptr); //==> 5

(*ptr)++;

printf("x = %d\n",x);        //==> 6
printf(" *ptr = %d\n",*ptr); //==> 6*/

//float price =100.00;  //===> simple variable
//float *ptr =&price;   //===> pointer variable
//float **pptr =&ptr;   //===> pointer to pointer variable

 
int i = 55;
int *ptr =&i;
int **pptr =&ptr;

printf("%d",**pptr);

	 
	
	
	
	return 0;
}
