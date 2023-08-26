#include<stdio.h>
#include<math.h>

//addition
int addn(int a, int b);
//factorial using iteration
int factL(int n);
//even odd identifier
int eo(int n);
//prime number using iteration
int prime(int n);
//print table of n
int tabl(int n);
//checking age   or  age to vote
int age(int n);
// 3 conditions checking
int checkin(int a, int b); 
//switch case
char alpha(char q);
//radius of the circle
float rad(int n);
//print sum of n natural numbers
int nat(int n);
//print all even numbers till n
int evenall(int n);
//print all odd numbers till n
int oddall(int n);
//average of three numbers
int three(int a, int b, int c);
//sum of n odd numbers
int sumodd(int n);
//sum of n even numbers
int sumeven(int n); 
//return greater number
int greater(int a, int b);
// circumference of a circle
float circum(int n);
//calculate the power of the number
int power(int x,int n);
//GCD(HCF) calculator using iteration 
int gcd(int n, int m);
//GCD(HCF) calculator using recursion 01
int gcdR(int a, int b);
//GCD(HCF) calculator using recursion 02
int gcdR2(int n1, int n2);
//print nth fibonacchi number using recursion
int fib(int n);
//print sum number of nth number
int sum2(int n);
//to find a square root
int squareroot(int n);
//write a function to print hot or cold
int hotcold(int n);
//take a input from the user and output its cube
int cube(int n);
//printf the number if +ve,-ve, even,odd
int evenpostive(int n);
//check for upper case or lower case alphabet
char alphacheck(char ch);
//keep taking nmbers as input from user until user enters and odd number 
int evenkeeptaking(int n);
//keep taking nmbers as input from user until user enters multiple of 7 
int seven(int n);
// print all numbers from 1 to 10 except for 6
int six(int n);
// print all the odd numbers from 5 to 50
int five(int n,int m);
// print reverse of the table for a number n 
int revtabl(int n);
// calculate the sum of all numbers bet 5 and 50 (including 5 and 50)
int sum50(int n, int m);
//progrm to add 18% gst on price
float gst(float value);
//converts celsius to fareniet
float convertTemp(float celsius);
//Fibonacci using Recursion
int Fibonacci(int i);

int main(){
	
//int a = 5;                         // addition
//int b = 4;

//int add = addn(a,b);
//printf("%d",add);

//printf("%d",addn(a,b));

//printf("%d",factL(6));

//printf("%d",eo(7));

//prime(19);

//printf("%d",tabl(5));
//tabl(5);

//age(4);

/*int a,b;
printf("enter a : ");
scanf("%d",&a);
printf("enter b : ");
scanf("%d",&b);
checkin(a,b);*/

//alpha('p');

// rad(8);

//printf("%d",nat(3));

//evenall(10);

//oddall(10);

//three(4,8,6);

//sumodd(5);     

//sumeven(5);

//greater(4,6);

//circum(8);

//power(8,4);

//gcd(12,8);

//GCDR
/*int r;
r=gcdR(42,34);
printf("GCD : %d",r);*/


//printf("GCD : %d",gcdR2(12,8));

//int n = 10;
//printf(" %d fibonacchi number is :  %d",n,fib(n));

//sum2(5);

//printf("%d",squareroot(5));

//hotcold(26);

/*long power = pow(4,2); //power function in c 
printf("%ld",power);*/


//printf("%d",cube(5));

//evenpostive(-14);

//alphacheck('M');

//evenkeeptaking(1);

//seven(1);

//printf("%d",six(10));

//five(5,50);

//revtabl(5);

//sum50(5,50);

//gst(100);

//convertTemp(55);


//Fibonacci using Recursion
int num;
printf("enter the number : ");
scanf("%d",&num);

for(int i=0; i<num; i++){
	printf("%d\n",Fibonacci(i));
}
	








return 0;	
}

int addn(int a, int b){
	return a + b;
}

int factL(int n){
	if(n<0){
		printf("invalid number");
	}
	int numb=1;
    for(int i=n; i>1; i--){
    	numb = numb*i;
	}
	return numb;
}


int eo(int n){
	
	if(n%2==0){
		printf("even number");
	}else{
		printf("odd number");
	}
	return 0;
}

int prime(int n){
	int count =0;
	for(int i=2; i<=n-1; i++ ){
		if(n%2==0){
			count = count+1;
		}
	}
	if(count>0){
		printf(" is not a prime number ");
	}else{
		printf("is a prime number ");
	}
	return n;
}

int tabl(int n){
	for(int i=1; i<=10; i++ ){
		printf("%d\n",i*n);
	}
	
}


int age(int n){
	printf("enter the age : ");
	scanf("%d",&n);
	
	if(n>18){
		printf("adult");
	}else{
		printf("not adult");
	}
}

int checkin(int a, int b){
	if(a==b){
		printf("equal");
	}else{
		if(a>b){
			printf("a is greater");
		}else{
			printf("b is greater");
		}
	}
}


char alpha(char q){
	switch(q){
		case 'i' : printf("namaste");
		break;
		
		case 'e' : printf("hello");
		break;
		
		case 'f' : printf("bonjur");
		break;
		
		default : printf("invaild button");
	}
}

float rad(int n){
	printf("%f",3.14*n*n);
}

int sum = 0;
int nat(int n){
	for(int i=1; i<=n; i++){
		sum=sum+i;
	}
	return sum;
}


int evenall(int n){
	for(int i=0; i<=n; i++ ){
		if(i%2!=0){
			continue;
		}else{
			printf("%d\n",i);
		}
	}
}


int oddall(int n){
	for(int i=0; i<=n; i++ ){
		if(i%2==0){
			continue;
		}else{
			printf("%d\n",i);
		}
	}
	
}

int three(int a, int b, int c){
	int sum= (a+b+c)/3;
	printf("%d",sum);
}


int sumodd(int n){
	
	int sum=0;
	for(int i=1; i<=n; i++){
	
	if(i%2!=0){
		//printf("%d\n",i);
		sum=sum+i;
	  }	
	}
	  printf("sum of odd numbers from 0 to %d : %d",n,sum);
}


int sumeven(int n){
	int sum =0;
	for(int i=1; i<=n; i++ ){
		if(i%2==0){
			printf("%d\n",i);
			sum=sum+i;
		}
	}
	printf("sum of even numbers from 0 to %d : %d",n,sum);
}


int greater(int a, int b){
	if(a>b){
		printf("a is greater : %d",a);
	}else{
		printf("b is greater : %d",b);
	}
}

float circum(int n){
	printf("circumference of circle : %f",2*3.14*n);
}


int power(int x, int n){
	int result=1;
	for(int i=1; i<=n; i++){
		result = result*x;
	}
	printf("%d",result);
}

//gcd
int gcd(int n, int m){ 
int gcd;
	
	for(int i=1; i<=n && i<=m; i++){
		if(n%i==0 && m%i==0){
		 gcd = i;
		}
	}
	printf("%d",gcd);
}

//gcdR
int gcdR(int a, int b){
	if(b==0){
		return a;
	}else if(a<b){
		return (gcdR(b,a));
	}else{
		return (gcdR(b,a%b));
	}
}

//gcdr2
int gcdR2(int n1, int n2){
	 while(n1!=n2){
	 	if(n1>n2){
	 		n1=n1-n2;
		 }else{
		 	n2=n2-n1;
		 }
	 }
	 return n2;
}



int fib(int n){
	//base case
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	
	int fibNm1 = fib(n-1);
	int fibNm2 = fib(n-2);
	int fibN = fibNm1+fibNm2;
	//printf("%d",fibN);
	return fibN;
}


int sum2(int n){
int sum = 0;
	for(int i=1; i<=n; i++){
		sum = sum+i;
	}
	printf("%d",sum);
}


int squareroot(int n){
	return n*n;
}


int hotcold(int n){
	if( n<25 && n>1 ){
		printf("cold");
	}else if(n>25 && n<50){
		printf("hot");
	}else{
		printf("not vaild temp");
	}
}

int cube(int n){
	return n*n*n;
}

int evenpostive(int n){
	if(n>0){
		printf("postive\n");
		if(n%2==0){
			printf("even\n");
		}else{
			printf("odd\n");
		}
	}else{
		printf("negative\n");
		if(n%2==0){
			printf("even\n");
		}else{
			printf("odd\n");
		}
	}
}


char alphacheck(char ch){
	
	if(ch>='A' && ch<='Z'){
		printf("Upper Case");
	}else if(ch>='a' && ch<='z'){
		printf("Lower Case");
	}else{
		printf("Not an english char");
	}
	return ch;
}


int evenkeeptaking(int n){
	
do{
printf("enter the number : ");
scanf("%d",&n);	
printf("%d\n",n);
 
 if(n%2!=0){
 	break;
 }

}while(1);
printf("thank you!");

}






int seven(int n){
do{
printf("enter the number : ");
scanf("%d",&n);	
printf("%d\n",n);
 
 if(n%7==0){
 	break;
 }

}while(1);
printf("thank you!");

}


int six(int n){
	for (int i=1; i<=n; i++){
		if(i==6){
			continue;
		}
	printf("%d\n",i);	
	}
}


int five(int n,int m){
	for(int i=n; i<=50; i++){
		if(i%2==0){
			continue;
		}
		printf("%d\n",i);
	}
}


int revtabl(int n){
	for(int i=10; i>=1; i--){
		printf("%d\n",n*i);
	}
}


int sum50(int n, int m){
	int sum=0;
	for(int i=n; i<=m; i++){
		sum=sum+i;
	}
	printf("%d",sum);
}

float gst(float value){
	value=value+(0.18*value);
	printf("price with GST : %f",value);
	
}


float convertTemp(float celsius){
	float far = celsius *(9.0/5.0)+32;
	printf("celsius to farhneit : %f",far);
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






