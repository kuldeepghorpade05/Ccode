#include<stdio.h>
#include<math.h>

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

//cgpa average
float averagecgpa(float totalsgpa,int totalsem){
	float cgpa = totalsgpa/totalsem;
	return cgpa;
}

