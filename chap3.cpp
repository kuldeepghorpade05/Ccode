#include<stdio.h>

int main(){
	// conditionals statements 
	
	 /*int age;
	 printf("enter the age : ");
	 scanf("%d",&age);*/
	 
	 /*if(age>=18){
	 	printf("adult \nthey can vote \nthey can drive");
	 }else if(age > 13 && age < 18){
	 	printf("teenager\n");
	 }else{
	 	printf("child");
	 }*/
	 
	 // ternary operator example
	 
	 //condition ? if : else ;
	 //age >=18 ? printf("adult") : printf("not adult");
	 
	 
	 /*int day; //1-mon 2-tue 3-wed
	 printf("enter day(1-7) : ");
	 scanf("%d",&day);
	 
	 switch(day) {
	 	case 1 : printf("monday");
	 	break;
	 	case 2 : printf("tuesday");
	 	break;
	 	case 3 : printf("wednesday");
	 	break;
	 	case 4 : printf("thurday");
	 	break;
	 	case 5 : printf("friday");
	 	break;
	 	case 6 : printf("saturday");
	 	break;
	 	case 7 : printf("sunday");
	 	break;
	 	default : printf("not a valid day");
	 }*/
	 
	 
	 /*char day;
	 printf("enter the day (m-s) : ");
	 scanf("%s",&day);
	 
	 
	 switch (day){
	 	case 'm' : printf("monday");
	 	break;
	 	case 't' : printf("tuesday");
	 	break;
	 	case 'w' : printf("wednesday");
	 	break;
	 	case 'T' : printf("thursday");
	 	break;
	 	case 'f' : printf("friday");
	 	break;
	 	case 's' : printf("saturday");
	 	break;
	 	case 'S' : printf("sunday");
	 	break;
	 	default : printf("not a valid day");
	 	
	 }*/
	 
	 
	 int num;
	 printf("enter the number : ");
	 scanf("%d",&num);
	 
	 if(num>=0){
	 	printf("positive \n");
	 	if(num%2==0){
	 		printf("even \n");
		 }else{
		 	printf("odd \n");
		 }
	 	}else{
	 	printf("negative \n");
	 	if(num%2==0){
	 		printf("even \n");
		 }else{
		 	printf("odd \n");
		 }
	 	
	 }	
	 
	 
	 /*int mark;
	 printf("enter the marks : ");
	 scanf("%d",&mark);
	 
	 if(mark<=30 && mark>=0){
	 	printf("fail");
	 }else if(mark>30 && mark<100){
	 	printf("pass");
	 }else{
	 	printf("wrong marks");
	 }*/

//  mark>=30 ? printf("pass") : printf("fail");

	 
	 /*int marks;
	 printf("enter the marks : ");
	 scanf("%d",&marks);
	 
	 if(marks<30){
	 	printf(" c grade");
	 }else if( marks>=30 && marks<70 ){
	 	printf("b grade");
	 }else if(marks>=70 && marks<90){
	 	printf("a grade");
	 }else {
	 		printf(" a+ grade");
	 }*/
	 
	 
	 
	 /*char ch;
	 printf("enter the charcter : ");
	 scanf("%c",&ch);
	 
	 
	 if( ch>= 'A' && ch<='Z'){
	 	printf("upper case");
	 }else if( ch>='a' && ch<='z'){
	 	printf("lower case");
	 }else{
	 	printf("not an english charcter");
	 }*/
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
return 0;	 
}
