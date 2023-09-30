#include<stdio.h>
#include<math.h>
#include<string.h>
//CHAPTER-9 STRUCTURES

//structure is user defined data-type

//declare structure
struct student {        //==> data type
	int roll;    
	float cgpa;       //==> properties
	char name[100];
};

//typedef keyword
typedef struct computerengineeringstudent{
	int roll;
	float cgpa;
	char name[100];
} coe;

void printinfo(struct student s1);

//Q56
struct address {
	int houseno;
	int block;
	char city[100];
	char state[100];
};

void printadd(struct address add);

// Q57 VECTORS
struct vector{
	int x;
	int y;
};

void calsum(struct vector v1, struct vector v2, struct vector sum);

struct complex {
	int real;
	int img;
};


typedef struct bankdetails {
	char name[100];
	int accountno;
	int ifsccode;
} acc;

//CGPA CALCULATOR
struct cgpacalculator {
	float sem1;
	float sem2;
	float sem3;
	float sem4;
	float sem5;
	float sem6;
	float sem7;
	float sem8;
};

float averagecgpa(float totalsgpa,int toatlsem);

int main(){
	
	
	/*struct student s1;
	s1.roll=9;
	s1.cgpa=7.12;
	//s1.name="kuldeep";    ==> wrong way
	strcpy(s1.name, "kuldeep");
	
	printf("student name : %s\n",s1.name);
	printf("student roll no : %d\n",s1.roll);
	printf("student cgpa : %f\n",s1.cgpa);
	
	printf("\n");
	
	//student 02
	struct student s2;
	s2.roll = 45;
	s2.cgpa = 8.45;
	strcpy(s2.name, "rohit");
	
	printf("student name : %s\n",s2.name);
	printf("student roll no : %d\n",s2.roll);
	printf("student cgpa : %f\n",s2.cgpa);
	
	printf("\n");
	
	//student 03
	struct student himanshu;
	himanshu.roll =87;
	himanshu.cgpa =8.47;
	strcpy(himanshu.name, "himanshu");
	
	printf("student name : %s\n",himanshu.name);
	printf("student roll no : %d\n",himanshu.roll);
	printf("student cgpa : %f\n",himanshu.cgpa);*/
	
	
	
//ARRAY OF STRUCTURES

  /*struct student ece[100];
  ece[0].roll=12;
  ece[0].cgpa=8.18;
  strcpy(ece[0].name,"rooney");
  
  ece[1].roll=18;
  ece[1].cgpa=7.12;
  strcpy(ece[1].name,"salah");
  
  printf("roll no : %d\ncgpa is : %f\nstudent name : %s",ece[0].roll,ece[0].cgpa, ece[0].name);
  printf("\n \n");
  printf("roll no : %d\ncgpa is : %f\nstudent name : %s",ece[1].roll,ece[1].cgpa, ece[1].name);
	
  printf("\n \n");

  struct student coe[100];
  coe[0].roll=14;
  coe[0].cgpa=5.14;
  strcpy(coe[0].name,"hazard");
  
  coe[1].roll=45;
  coe[1].cgpa=6.14;
  strcpy(coe[1].name,"harry");
  
  printf("roll no : %d\ncgpa is : %f\nstudent name : %s",coe[0].roll,coe[0].cgpa, coe[0].name);
  printf("\n \n");
  printf("roll no : %d\ncgpa is : %f\nstudent name : %s",coe[1].roll,coe[1].cgpa, coe[1].name); */
	
  
//INITIALIZING STRUCTURES

  /*struct student s1 ={16,9.2,"kuldeep"};
  printf(" Roll no : %d\n Cgpa : %f\n Name : %s\n",s1.roll,s1.cgpa,s1.name);*/
  
//POINTERS TO STRUCTURES
  
 /* struct student s1 ={16,9.2,"kuldeep"};
  struct student *ptr = &s1;
  printf(" Roll no : %d\n Cgpa : %f\n Name : %s\n",(*ptr).roll,(*ptr).cgpa,(*ptr).name);*/
  	
	//ARROW OPERATOR
	/*struct student s1 ={16,9.2,"kuldeep"};
    struct student *ptr = &s1;
	printf(" Roll no : %d\n Cgpa : %f\n Name : %s\n",ptr->roll, ptr->cgpa, ptr->name);*/
  
//PASSING STRUCTURES TO FUNCTIONS

/*struct student s1 ={16,9.2,"kuldeep"};
printinfo(s1);*/


//TYPEDEF KEYWORD

/*coe tdk1;
tdk1.roll=78;
tdk1.cgpa=8.18;
strcpy(tdk1.name, "anotnio");

printf("roll no : %d\ncgpa : %f\nname : %s",tdk1.roll,tdk1.cgpa,tdk1.name);*/

    
//Q56 enter address (house no, block, city, state)of 5 people
	
/*	struct address adds[5];
	//input
    printf("Enter info for person 1 : ");
    scanf("%d",&adds[0].houseno);  
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);
    
    printf("Enter info for person 2 : ");
    scanf("%d",&adds[1].houseno);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);
	
	printf("Enter info for person 3 : ");
    scanf("%d",&adds[2].houseno);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);
    
    printf("Enter info for person 4 : ");
    scanf("%d",&adds[3].houseno);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);
    
    printf("Enter info for person 5 : ");
    scanf("%d",&adds[4].houseno);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);
	
	printadd(adds[0]);
	printadd(adds[1]);
	printadd(adds[2]);
	printadd(adds[3]);
	printadd(adds[4]); */
	
	
//Q57
/* create a structure to store VECTORS then make a function to return
sum of 2 VECTORS */

/*struct vector v1 = {5,10};
struct vector v2 = {14,8};
struct vector sum = {0};

calsum(v1, v2, sum); */


// Q58
/* create a structure to store complex numbers (use arrow operator) */ 

/*struct complex number1 ={5, 8};
struct complex *ptr = &number1;

printf("real part : %d\n",ptr->real);
printf("img part : %d\n",ptr->img); */

// Q60
/* make a structure to store bank account information of a customer
of  abc bank, also make an alias for it */
 

	/*acc acc1 = {"kuldeep", 1550, 544};
	acc acc2 = {"raaj", 4845, 545};
	acc acc3 = {"john", 6845, 421};
	
	printf("name : %s\naccount number : %d\nifsc code : %d\n \n",acc1.name,acc1.accountno,acc1.ifsccode);
	printf("name : %s\naccount number : %d\nifsc code : %d\n \n",acc2.name,acc2.accountno,acc2.ifsccode);
	printf("name : %s\naccount number : %d\nifsc code : %d\n \n",acc3.name,acc3.accountno,acc3.ifsccode); */
	
	
// CGPA CALCULATOR USING STRUCTURES AND ARRAY

 struct cgpacalculator sgpainput[8];
 printf("Enter SGPA of 1st sem :  ");
 scanf("%f",&sgpainput[0].sem1);
 
 printf("Enter SGPA of 2nd sem :  ");
 scanf("%f",&sgpainput[1].sem2);
 
 printf("Enter SGPA of 3rd sem :  ");
  scanf("%f",&sgpainput[2].sem3);
 
 printf("Enter SGPA of 4th sem :  ");
 scanf("%f",&sgpainput[3].sem4);
 
 printf("Enter SGPA of 5th sem :  ");
 scanf("%f",&sgpainput[4].sem5);
 
 printf("Enter SGPA of 6th sem :  ");
 scanf("%f",&sgpainput[5].sem6);
 
 printf("Enter SGPA of 7th sem :  ");
 scanf("%f",&sgpainput[6].sem7);
 
 printf("Enter SGPA of 8th sem :  ");
 scanf("%f",&sgpainput[7].sem8);
 
 float totalsgpa = (sgpainput[0].sem1 + sgpainput[1].sem2 + sgpainput[2].sem3 + sgpainput[3].sem4 + sgpainput[4].sem5 + sgpainput[5].sem6 +sgpainput[6].sem7 + sgpainput[7].sem8 );
 printf("Total SGPA : %f\n",totalsgpa);
 
 printf("CGPA  : %f",averagecgpa(totalsgpa,8));
 
 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

void printinfo(struct student s1){
printf("Student information : \n");
printf(" Roll no : %d\n Cgpa : %f\n Name : %s\n",s1.roll,s1.cgpa,s1.name);
}


//Q56
void printadd(struct address add){
	printf("address is : %d, %d, %s,%s\n",add.houseno,add.block,add.city,add.state);
}

void calsum(struct vector v1, struct vector v2, struct vector sum){
	sum.x = v1.x + v2.x ;
	sum.y = v1.y + v2.y ;
	
	printf("sum of x is : %d\n",sum.x);
	printf("sum of y is : %d\n",sum.y);
}
 
 
//cgpa average
float averagecgpa(float totalsgpa,int totalsem){
	float cgpa = totalsgpa/totalsem;
	return cgpa;
}




















