#include<stdio.h>
#include<math.h>

//FUNCTIONS 

//declaration / prototype
void hello();
void goodbye();

int sum(int x, int y);  

void table(int n);

void price(float value);

float square(float side); //declare function
float circle(float rad);
float rectangle(float a, float b);

float convertTemp(float clesius);

int percentage(int sci, int math, int sans);

int fib(int n);



void printhello();

void namaste();
void bonjur(); 

int sum2(int a, int b);

int table2(int t);

int square1(int n);
float rectangle1(float a, float b);

float circle1(float r);

float cel(int n);

int percentage1(int x, int y, int z);


//----------------------------------------------------------
int main(){
// Qs27 write 2 functions - one to print "hello" and 2nd to print "good bye"

	//hello(); //function call
	//goodbye();
	
	/*printf("enter f for french and i for indian : ");
	char ch;
	scanf("%c",&ch);
	
	if(ch=='i'){
		namaste();
	}else{
		bonjur();
	}*/
	
	
	/*int a,b;
	printf("enter first number : ");
	scanf("%d",&a);
	
	printf("enter first number : ");
	scanf("%d",&b);
	
	int s = sum(a,b);
	printf("%d",s);*/
	 
/*	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	table(n);//argument or actual parameter*/
	
	/*float value = 150.0;
	price(value);
	
	printf("%f\n",value); */
	
	
	// use library functions to calculate the square of a number given by user
	
	/*float n;
	printf("enter the number : ");
	scanf("%f",&n);

	printf("%f", pow(n,2));*/



//float a =5.0;
//float b =7.0;

//printf("area of circle : %f",circle(a));
//printf("area of square : %f",square(a));
//printf("area of rectangle : %f",rectangle(a,b));



 /*float far =  convertTemp(25);
 printf("far : %f",far);*/
 
// int sci = 98;
// int math = 95;
// int sans = 99;
 
/*int marks = percentage(sci,math,sans);
printf("%d",marks);*/

//printf("%d",fib(10));

//printhello();
//goodbye();

//char n;
//printf("enter input : ");
//scanf("%c",&n);
//
//if(n =='i'){
//	namaste();
//}else{
//	bonjur();
//}

//int a,b;
//printf("enter num1 : ");
//scanf("%d",&a);
//
//printf("enter num2 : ");
//scanf("%d",&b);
//
//sum2(a,b);

//int n;
//printf("enter num : ");
//scanf("%d",&n);
//table(n);

//int n =4;
//printf("%f",pow(n,2));


//int n = 5;
//printf("square of n : %f",square(n));

//float x=4.0;
//float y=5.0;

//printf("%f",rectangle1(x,y));

//printf("%f",circle1(5));


/*int n = 0;
cel(n);*/
   
   //or

/*float n = cel(38);
printf("conversion : %f",n);*/

/*int sci = 98;
int math = 95;  
int sans = 99;

int sum = percentage1(sci,math,sans);
printf("average is : %d",sum);*/






	return 0;
}

//---------------------------------------------------------

//function defination
void hello(){
	printf("hello world bro\n");
}

void goodbye(){
	printf("goodbye!\n");
}

//void namaste(){
//	printf("NAMASTE!\n");
//}
//
//void bonjur(){
//	printf("BONJUR!\n");
//}

int sum(int x, int y){
	return x+y;
}

void table(int n){ //parameter or formal parameter
	for(int i=1; i<=10; i++ ){
		printf("%d\n",n*i);
	}
}

void price(float value){
	value=value+(0.18*value);
	printf("final price :  %f\n",value);
	
}

float square(float side){
	return side*side;
}

float circle(float rad){
	return 3.14*rad*rad;
}

float rectangle(float a, float b){
	return a*b;
}


float convertTemp(float clesius){
	float far = clesius *(9.0/5.0)+32;
	return far;
}


int percentage(int sci, int math, int sans){
	return (sci+math+sans)/3;
}


//fibonacci series of nth number

int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
int fibNm1 = fib(n-1);
int fibNm2 = fib(n-2);

int fibN = fibNm1 + fibNm2;
printf("%d\n",fibN);
return fibN;
}

void printhello(){
	printf("hello world\n");
}


void namaste(){ 
	printf("namasate!");
}

void bonjur(){
	printf("bonjur!");
}

int sum2(int a, int b){
	int sum = a+b;
	printf("%d",sum);
	return sum;
}

int table2(int t){
	for(int i=1; i<=10; i++ ){
		printf("%d",t*i);
	}
}



int square1(int n){
//printf("%f",n*n);
return n*n;
}


float rectangle1(float a, float b){
	return a*b;
}


float circle1(float r){
	return 3.14*r*r;
}

float cel(int n){
  float con = n*(9.0/5.0)+32;
  //printf("conversion : %f",con);
  return con;
	
}

int percentage1(int x, int y, int z){
	return (x+y+z)/3;
}




