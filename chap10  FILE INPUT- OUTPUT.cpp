#include<stdio.h>
//FILE I/O


int main() {
	
	FILE *fptr;
	
//open file
	fptr = fopen("hello.txt","r");
	//fclose(fptr);
	
	/*if(fptr == NULL){
		printf("file doesnt exist");
	}else{
		fclose(fptr);
	}*/
	
//to  read the char in txt file
	
	/*char ch;
	fscanf(fptr,"%c",&ch);
	printf("charcter = %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("charcter = %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("charcter = %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("charcter = %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("charcter = %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("charcter = %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("charcter = %c\n",ch);*/
	
	
//to read the numbers in txt file
	/*int numbs;

	fscanf(fptr,"%d",&numbs);
	printf("number is : %d\n",numbs);
	fscanf(fptr,"%d",&numbs);
	printf("number is : %d\n",numbs);
	fscanf(fptr,"%d",&numbs);
	printf("number is : %d\n",numbs);*/
	
//write  in text file
	/*fprintf(fptr,"%c",'M');
	fprintf(fptr,"%c",'A');
	fprintf(fptr,"%c",'N');
	fprintf(fptr,"%c",'G');
	fprintf(fptr,"%c",'O');
	fclose(fptr);*/
	
// FGETC function to read from txt file
	/*printf("%c\n",fgetc(fptr));
	printf("%c\n",fgetc(fptr));
	printf("%c\n",fgetc(fptr));
	printf("%c\n",fgetc(fptr));
	printf("%c\n",fgetc(fptr));
	printf("%c\n",fgetc(fptr));
	printf("%c\n",fgetc(fptr));*/
	

// FGETC function to read from txt file
    /*fputc('G',fptr);
    fputc('H',fptr);
    fputc('O',fptr);
    fputc('R',fptr);
    fputc('P',fptr);
    fputc('A',fptr);
    fputc('D',fptr);
    fputc('E',fptr);*/
    

// program to read all the char or string from txt file	
	/*char ch;
	ch = fgetc(fptr);
	while(ch != EOF){
		printf("%c",ch);
		ch = fgetc(fptr);
	}
	printf("\n");*/
	
	
// Q61 make a program to read 5 integers from a file

	/*int n;
	fscanf(fptr,"%d",&n);
	printf("number : %d\n",n);
	fscanf(fptr,"%d",&n);
	printf("number : %d\n",n);
	fscanf(fptr,"%d",&n);
	printf("number : %d\n",n);
	fscanf(fptr,"%d",&n);
	printf("number : %d\n",n);
	fscanf(fptr,"%d",&n);
	printf("number : %d\n",n);*/
	

//  Q62 
/* make a program to input student information from a user and enter
it to a file */
  
 /* char name[100];
  int rollno;
  int age;
  float cgpa;
  
  printf("Enter name : ");
  scanf("%s",&name);
  printf("Enter roll no : ");
  scanf("%d",&rollno);
  printf("enter age : " );
  scanf("%d",&age);
  printf("enter cgpa : ");
  scanf("%f",&cgpa);
  
  fprintf(fptr,"Student name : %s\n",name);
  fprintf(fptr,"Student roll no : %d\n",rollno);
  fprintf(fptr,"Student age : %d\n",age);
  fprintf(fptr,"student cgpa : %f\n",cgpa);
 
   fclose(fptr);*/
   
   
// Q63
/* write a program to write all the odd numbers from 1 to n in a file*/
  
  /*int n;
  printf("Enter a number(n) : ");
  scanf("%d",&n);
  
  for(int i=1; i<=n; i++){
  	if(i%2!=0){
  		fprintf(fptr, "%d\t",i);
	  }
  }
 
 fclose(fptr);*/
	
// Q64
/* 2 numbers a and b, are written in a file write a program to 
replace them with their sum */
 

	int a;
	fscanf(fptr,"%d",&a);
	int b;
	fscanf(fptr,"%d",&a);

	fclose(fptr);
	
	fptr = fopen("hello.txt","w");
	fprintf(fptr,"%d",a+b);
	fclose(fptr);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	fclose(fptr);
	
	
	
	return 0;
}
