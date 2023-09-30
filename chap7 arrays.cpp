#include<stdio.h>
#include<math.h>

void printnumbers(int arr[],int n);

int countodd(int arr[], int n);

//---------------------------------------------------------------
int main(){
	
//int marks[] = {97,98,89};
	
/*int marks[3];

printf("enter physics marks : ");
scanf("%d",&marks[0]);
	
printf("enter chem marks : ");
scanf("%d",&marks[1]);
	
printf("enter bio marks : ");
scanf("%d",&marks[2]); 
	
printf("phy : %d,chem : %d,bio : %d",marks[0],marks[1],marks[2]);*/
	
	
//practice 
// write a program to enter price of 3 items and print their final cost with gst

/*float items[3];

printf("Enter 1st prices : ");
scanf("%f",&items[0]);
printf("Enter 2nd prices : ");
scanf("%f",&items[1]);
printf("Enter 3rd prices : ");
scanf("%f",&items[2]);


printf("total price 1 : %f\n",items[0]+(0.18*items[0]));
printf("total price 2 : %f\n",items[1]+(0.18*items[1]));
printf("total price 3 : %f\n",items[2]+(0.18*items[2]));*/


//pointer arthimetic
//pointers can be incremented or decremented

//case : 1  int
/*int age = 22;
int *ptr= &age;
printf("%u\n",ptr);
ptr++;
printf("%u\n",ptr);
ptr--;
printf("%u\n",ptr);*/


//case : 2  float
/*int price = 100.00;
int *ptr1= &price;
printf("%u\n",ptr1);
ptr1++;
printf("%u\n",ptr1);
ptr1--;
printf("%u\n",ptr1);*/

//case : 3 char
/*char star = '*';
char *ptr2=&star;
printf("%u\n",ptr2);
ptr2++;
printf("%u\n",ptr2);
ptr2--;
printf("%u",ptr2);*/

//we can also sutract one pointer from another pointer
//we can also compare 2 pointers

/*int age1 =22;
int age2 =23;
int *ptr1 =&age1;
int *ptr2 =&age2; 

printf("ptr1 : %u\nptr2 : %u\nptr1-ptr2 : %u\n",ptr1,ptr2,ptr1-ptr2);

ptr2=&age1;
printf("comparison : %u\n",ptr1==ptr2);*/



//traverse an array example :
/*int aadhar[5];
//input
int *ptr = &aadhar[0];

for (int i=0; i<5; i++ ){
    //printf("%d index : ",i);
	scanf("%d",(ptr+i));   //scanf("%d",&aadhar[i]);
}

//output
for(int i=0; i<5; i++ ){
	printf("%d index : %d\n",i,*(ptr+i));
	//printf("%d index : %d\n",i,aadhar[i]);
}*/


//arrays as function arguments
/*int arr[]={1,2,3,4,5,6};
printnumbers(arr,6);*/

//2D array ==> 2*3

/*int marks[2][3];

marks[0][0]=90;
marks[0][1]=89;
marks[0][2]=78;

marks[1][0]=80;
marks[1][1]=79;
marks[1][2]=88;

printf("%d",marks[0][1]);*/

//write a function to count the number of odd numbers in an array
/*int arr[]={1,2,3,4,5,6,7};
printf("%d",countodd(arr,7));*/

//practice Qs 43
//for the given array, what will be the following give?
/*int arr[]={1,2,3,4,5};
printf("%d\n",*(arr+2));
printf("%d\n",*(arr+4));*/



//int marks[]={97,45,74};

/*int marks[3];
printf("enter phy : ");
scanf("%d",&marks[0]);
printf("enter chem : ");
scanf("%d",&marks[1]);
printf("enter bio : ");
scanf("%d",&marks[2]);
printf("phy : %d, chem : %d, bio : %d",marks[0],marks[1],marks[2]);*/
	 
	
//Q write a program to enter price of 3 items and print their final cost with gst
	
/*float price[3];
printf("enter 3 prices : ");
scanf("%f",&price[0]);
scanf("%f",&price[1]);
scanf("%f",&price[2]);

printf("price 1 : %f\n",price[0]+(0.18*price[0]));
printf("price 2 : %f\n",price[1]+(0.18*price[1]));
printf("price 3 : %f\n",price[2]+(0.18*price[2]));*/

	
	
//	float age = 22.00;
//	float *ptr=&age;
//	
//	printf("%u\n",ptr);
//	(ptr)++;
//	printf("%u\n",ptr);

/*int age = 22;
int age2 =18;
int *ptr=&age;
int *ptr2=&age2;

printf("difference : %u\n",ptr-ptr2);
ptr2=&age;
printf("comparison : %u\n",ptr==ptr2);*/



//aadhar using array
/*int aadhar[5];

//input
int *ptr = &aadhar[0];
for(int i=0; i<5; i++){
	printf("%d index  : ",i);
	scanf("%d",(ptr+i));
}

printf("\n");

//output
for(int i=0; i<5; i++){
	printf("%d index : %d\n",i, *(ptr+i));
}*/	
	
//arrays as functions
	
	
/*int arr[]= 	{1,2,3,4,5,6};
printnumbers(arr,6);*/

	
	
/*float price[3];

printf("enter price1 : ");
scanf("%f",&price[0]);
printf("enter price2 : ");
scanf("%f",&price[1]);
printf("enter price3 : ");
scanf("%f",&price[2]);

printf("total price 1 : %f\n",price[0]+(0.18*price[0]));
printf("total price 2 : %f\n",price[1]+(0.18*price[1]));
printf("total price 3 : %f\n",price[2]+(0.18*price[2]));*/
	
//traverse array	
/*int aadhar[5];

//input
int *ptr=&aadhar[0];
for(int i=0; i<5; i++){
	printf("%d index : ",i);
	scanf("%d",(ptr+i));
}

printf("\n");

//output
for(int i=0; i<5; i++){
	printf("%d index = %d\n",i, *(ptr+i));
}*/

/*int arr[]={1,2,3,4,5,6,};
printnumbers(arr,6 );*/


//multidimensional array

/*int marks[2][5];  //2D array

marks[0][0]=90;
marks[0][1]=48;
marks[0][2]=98;
marks[0][3]=87;
marks[0][4]=71;

marks[1][0]=58;
marks[1][1]=78;
marks[1][2]=81;
marks[1][3]=64;
marks[1][4]=69;

printf("%d",marks[1][2]);*/

/*write a function to count the number of 
odd numbers in an array*/


//count of odd numbers using array
/*int arr[]={1,2,3,4,5,6,7,8,9};
printf("%d",countodd(arr,9));*/

// Q44 write a function to reverse an array


//fibonacci using ARRAY and ITERATION

/*int n;
printf("Enter n : ");
scanf("%d",&n);

int fib[n];
fib[0]=0;
fib[1]=1;

printf("0 \t 1 \t");
for(int i=2; i<n; i++){
	fib[i]=fib[i-1]+fib[i-2];
	printf("%d\t",fib[i]);
}*/
	
	
	
	
	
	
	
	
	return 0;
}
//---------------------------------------------------------

void printnumbers(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}


int countodd(int arr[], int n){
	int count =0;
	for(int i=0; i<n; i++){
		if(arr[i]%2 !=0){
			count++;
		}
	}
	return count; 
}
















