#include<stdio.h>

int main(){
	
	//loop control statements
	//practice Qs13 
	/* for( int i=0; i<=10; i++ ){
	 	printf("%d \n",i);
	 }*/
	 
	 //increment operator
	 
	 //i++(post increment operator)
	 /*int i=1;
	 printf("%d\n",i++); //use then increase
	 printf("%d",i);
	 
	 
	 //++i(pre increment operator)
	 int i=1;
	 printf("%d\n",++i); //increase then use
	 printf("%d",i);*/
	 
	 //loop counter can be float or even charcter
	 /*for(float i=1.0; i<=5.0; i++){
	 	printf("%f\n",i);
	 }
	 
	 for(char i='a'; i<='z'; i++){
	 	printf("%c\n",i);
	 }*/
	 
	 //infinite loop *avoid it*
	/* for(int i=1; ; i++){
	 	printf("hello world\n");
	 }*/
	 
	 
//while loop syntax

/*int i=1;
while(i<=5){
	printf("hello world\n");
	i++;
}*/

// print the numbers from 0 to n, if n is given by user
/*int n;
printf("enter the number : ");
scanf("%d",&n);*/

//for loop
/*for(int i=0; i<=n; i++ ){
	printf("%d\n",i);
}*/

//while loop
/*int i=0;
while(i<=n){
	printf("%d\n",i);
	i++;
}*/

//do while loop syntax  

/*int i=1;
do{
	printf("hello world\n");
	i++;
}while(i<=5);*/

// print the sum of first n natural numbers

/*int n;
printf("enter the number : ");
scanf("%d",&n);*/

/*int sum=0;
for(int i=1; i<=n; i++){
	sum=sum+i;  //sum +=i;
}
printf("sum is : %d",sum);
 
for(int i=n; i>=1; i--){
	printf("%d\n",i);
}*/

//----------------------------------
/*int n= 4;
int sum=0;
for(int i=1,j=n; i<=n && j>=1; i++,j--){
	sum=sum+i; //sum +=i;
	printf("%d\n",j);
}
printf("sum is : %d",sum);*/

//-------------------------------------
/*int n=5;
int sum=0;
for(int j=n; j>=1; j--){
	sum=sum+j; //sum +=i;
	printf("%d\n",j);
}
printf("sum is : %d",sum);*/

//print the table of a number input by user

/*int n;
printf("enter the nuber : ");
scanf("%d",&n);

for(int i=1; i<=10; i++ ){
	printf(" %d\n",i*n);
}*/


//keep taking nmbers as input from user until user enters and odd number 


/*int n;

do{
printf("enter the number : ");
scanf("%d",&n);	
printf("%d\n",n);
 
 if(n%2!=0){
 	break;
 }

}while(1);
printf("thank you!");*/
  

// Qs18 keep taking numbers as input from user until user enters a number which is multiple of 7
/*int n;

do{
printf("enter the number : ");
scanf("%d",&n);	
printf("%d\n",n);
 
 if(n%7==0){ //multiple of 7
 	break;
 }

}while(1);
printf("thank you!");*/
  
  
// Qs19 print all numbers from 1 to 10 except for 6

  /*for(int i=1; i<=10; i++){
  	
  	if(i==6){ // skips number 8
  		continue;
	  }
	  printf("%d\n",i);
  }*/
  
  
// Qs20 print all the odd numbers from 5 to 50

/*for(int i=5; i<=50; i++){
	
	if(i%2==0){
	continue;
	}
	printf("%d\n",i);
}*/


// Qs21 print the factorial of a number n
	
	/*int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	int fact=1;
	for(int i=1; i<=n; i++){
		fact=fact*i;	
	}
	printf("%d",fact);*/
	
	
	
// Qs22 print reverse of the table for a number n 

/*	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(int i=10; i>=1; i--){
		printf("%d\n",n*i);
	}*/
	
	
// Qs23 calculate the sum of all numbers bet 5 and 50 (including 5 and 50)

/*int sum =0;
for(int i=5; i<=50; i++ ){
	sum=sum+i;
}
printf("%d\n",sum);*/



	
	
	
	return 0;
}
