#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
 

// CHAPTER 11 DYNAMIC MEMORY ALLOCATION


int main(){
	
	
	/*printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(char)); */
	
// MALLOC-------------------------	
  /*	int *ptr;
	ptr = (int *) malloc(5 * sizeof(int));
	
	ptr[0]=41;
	ptr[1]=12;
	ptr[2]=14;
	ptr[3]=16;
	ptr[4]=18;
	
	for(int i=0; i<5; i++){
		printf("%d\n",ptr[i]);
	}*/
	
// Q65 write a program to allocate memory to store 5 prices	
	
	/*float *ptr;
	ptr = (float *) malloc(5 * sizeof(float));
	
	ptr[0] = 4.45;
	ptr[1] = 8.15;
	ptr[2] = 7.78;
	ptr[3] = 9.47;
	ptr[4] = 7.56;
	
	for(int i=0; i<5; i++){
		printf("%f\n",ptr[i]);
	}*/
	
// CALLOC()-------------------------


   /*float *ptr;
   ptr = (float *) calloc(5, sizeof(float));
   
   //  ptr[0] = 4.45;
   //	ptr[1] = 8.15;
   //	ptr[2] = 7.78;
   //	ptr[3] = 9.47;
   //	ptr[4] = 7.56;
	
	for(int i=0; i<5; i++ ){
		printf("%f\n",ptr[i]);
	}*/

// Q 66 WAP to allocate memory of n, where n is enterd by the user

  /* float n;
   printf("Enter n : ");
   scanf("%f",&n);
   float *ptr;
   ptr = (float *) calloc(n, sizeof(float));
   
   for(int i=0; i<n; i++ ){
   	printf("%f\n",ptr[i]); 
   }*/
   
// FREE()-----------------------

   
   /*	float *ptrf;
	ptrf = (float *) malloc(5 * sizeof(float));
	
	ptrf[0] = 4.45;
	ptrf[1] = 8.15;
	ptrf[2] = 7.78;
	ptrf[3] = 9.47;
	ptrf[4] = 7.56;
	
	for(int i=0; i<5; i++){
		printf("%f\n",ptrf[i]);
	}
//  free()
	
free(ptrf);
printf("\n");

ptrf = (float *) calloc(3, sizeof(float)); 
	
	for(int i=0; i<3; i++){
		printf("%f\n",ptrf[i]);
	} */
	

// REALLOC() -------------------

/* Q68 allocate memory for 5 numbers then dynamically increase 
it to 8 numbers */

   /*int *ptr;
   ptr = (int *) calloc(5, sizeof(int));
   
   printf("enter number(5) : "); 
   for(int i=0; i<5; i++ ){
   	scanf("%d",&ptr[i]);
   }
   
   ptr = (int *) realloc(ptr,8);
   
   printf("enter number(8) : "); 
   for(int i=5; i<8; i++ ){
   	scanf("%d",&ptr[i]);
   }
   
   //print
   for(int i=0; i<8; i++ ){
   	printf("number %d is %d\n",i,ptr[i]);
   }*/  
   
// Q69
/*create an array of size 5(using calloc) & enter its 
values from the user*/	
	
	/*int *ptr;
	ptr = (int *) calloc(5, sizeof(int));
	
	printf("Enter numbers(5) : ");
	for(int i=0; i<5; i++){
		scanf("%d",&ptr[i]);
	}
	
	//print
	for(int i=0; i<5; i++ ){
		printf("Number %d is %d\n",i,ptr[i]);
	}*/
	
	
// Q70
/* allocate memory to store first 5 odd numbers, then reallocate
it to store first 6 even numbers */
       
    
      int *ptr;
      ptr  = (int *) calloc(5, sizeof(int));
      
      ptr[0] = 1;
      ptr[1] = 3;
      ptr[2] = 5;
      ptr[3] = 7;
      ptr[4] = 9;
      
      for(int i=0; i<5; i++ ){
      	printf("%d\n",ptr[i]);
	  }
	  
	  printf("\n");
	  
	  ptr = (int*)realloc(ptr,6);
	  ptr[0] = 2;
      ptr[1] = 4;
      ptr[2] = 6;
      ptr[3] = 8;
      ptr[4] = 10;
      ptr[5] = 12;
      
      for(int i=0; i<6; i++ ){
      	printf("%d\n",ptr[i]);
	  }
      
      free(ptr);
       
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
