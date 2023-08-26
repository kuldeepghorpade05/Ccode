#include<stdio.h>
#include<conio.h>
#include<math.h>


int addn(int a, int b);

int factL(int n);

int gcd(int a, int b);

int fib(int n);

int sum2(int n);

//Fibonacci using Recursion
int Fibonacci(int i);

//---------------------------------------------------------------
	
int main(){
	

//	printf("hello world");
//	return 0;

//program to calculate perimeter of rectangle
/*int a,b;
printf("enter a : ");
scanf("%d",&a);

printf("enter b : ");
scanf("%d",&b);

printf("perimeter of rectangle : %d",a*b);*/


//take a num n from user & output its cube
/*int num;
printf("enter num : ");
scanf("%d",&num);

printf("cube : %d",num*num*num);*/

//write a program to print average of 3 num

/*int a,b,c;
printf("enter a : ");
scanf("%d",&a);
printf("enter b : ");
scanf("%d",&b);
printf("enter c : ");
scanf("%d",&c);

printf("average : %d",(a+b+c)/3);*/

//write a program to check if given character is digit or not

    /*char ch;
    printf("enter a character \n");
    scanf("%c", &ch);
    
    if (ch>='0' && ch<='9'){
	 printf("number is digit");
   }else{
    printf("number is not digit");
   }*/
   
//write a program to check if given character is alphabet or not
   /*char ch;
    printf("enter a character \n");
    scanf("%c", &ch);
    
    if (ch>='a' && ch<='z'){
	 printf("charcter is alphabet");
   }else{
    printf("charcter is not an alphabet");
   }*/
   
//write a program to print smallest number of two

/*int num1,num2;
printf("enter num1 : ");
scanf("%d",&num1);

printf("enter num2 : ");
scanf("%d",&num2);

if(num1<num2){
	printf("%d",num1);
}else{
	printf("%d",num2);
}*/

//write a program to check if the given number is natural number

/*int num;
printf("enter the number : ");
scanf("%d",&num);

if(num>=0){
	printf("natural number");
}else{
	printf("not a natural number");
}*/

//int a = 5;                         // addition
//int b = 4;

//int add = addn(a,b);
//printf("%d",add);

//printf("%d",addn(a,b));

                                      //factorial 

//printf("%d",factL(5));

/*for(int i=12; i>=1; i--){
	printf("%d\n",i);
}*/


/*int sum =0;
for(int i=1; i<=3; i++){
	sum = sum+i;
}
printf("%d",sum);*/

//pattern
/*int n=4;
int m=5;
//outer loop
for(int i=1; i<=n; i++){
	//inner loop
	for(int j=1; j<=m; j++){
		printf(" *");
	}
	printf("\n\n");
}*/

//INFINITE LOOP
/*for( ; ; ){
	printf("KULDEEP GHORPADE!\n");
}*/

/*Make a menu driven program. The user can enter 
 2 numbers, either 1 or 0.
 
 If the user enters 1 then keep taking input from 
 the user for a student’s marks(out of 100).
 If they enter 0 then stop.
 If he/ she scores :
 Marks >=90 -> print “This is Good”
 89 >= Marks >= 60 -> print “This is also Good”
 59 >= Marks >= 0 -> print “This is Good as well”
 Because marks don’t matter but our effort does.*/

/*int marks;
int input;


 do{
	scanf("&d",&marks);
	
	if(marks>=90 && marks<=100 ){
		printf("this is good\n");
		
	}else if(marks>=60 && marks<=89){
		printf("this is also good\n");
		
	}else if(marks>=0 && marks<=59){
		printf("this is good as well\n");
		
	}else{
		printf("invalid\n");
	}
	
	printf("want to continue? \n if yes press --> 1 \n if no press --> 0");
	scanf("%d",&input);	
	
} while(input==1);*/

//int n=12;
//int m=8;
//int gcd;
//
//for(int i=1; i<=n && i<=m; i++){
//		if(n%i==0 && m%i==0){
//			 gcd = i;
//		}
//	}
//	printf("%d",gcd);

/*int r;
r=gcd(20,40);
printf("GCD : %d",r);*/

//printf("%d",fib(10));


//sum2(5);

/*int age =22;
int *ptr= &age;

int _age=*ptr;

printf("%d",_age );*/
 


//Fibonacci using Recursion
int num;
printf("enter the number : ");
scanf("%d",&num);

for(int i=0; i<num; i++){
	printf("%d\n",Fibonacci(i));
}
	







return 0;
}
//--------------------------------------------------------

int addn(int a, int b){
	return a + b;
}

//factorial using iteration(loop)
int factL(int n){
	if(n<0){
		printf("invalid number");
	}
	
	int numb =1;
	for(int i=n; i>1; i--){
		numb = numb*i;
	}
	//printf("%d",numb);
	return numb;
	
}

int gcd(int a, int b){
	
	if(b==0){
		return a;
	}else if(a<b){
		return (gcd(b,a));
    }else{
		return (gcd(b,a%b));
	}
}






int fib(int n){
	//base case
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	
	int fibNm1 = fib(n-1);
	int fibNm2 = fib(n-2);
	int fibN = fibNm1 + fibNm2;
	//printf("%d\n",fibN);
	return fibN;
}


int sum2(int n){
int sum = 0;
	for(int i=1; i<=n; i++){
		sum = sum+i;
	}
	printf("%d",sum);
}


//Fibonacci using Recursion
int Fibonacci(int i){
	if(i==0){
		return 0;
	}else if(i==1){
		return 1;
	}else{
	    return Fibonacci(i-1)+Fibonacci(i-2);
	}
}

