#include<stdio.h>
#include<math.h>
#include<string.h>
//CHAPTER-8 STRINGS

void printstring(char arr[]);

//count length of string
int countlength(char arr[]);

//salting
void salting(char password[]);

//slice
void slice(char str[], int n, int m);

//vowels
int countvowels(char str[]); 

//check charcter
void checkchar(char str[], char ch);

//------------------------------------------------------------
int main(){
	
	//char name[]={'k','u','l','d','e','e','p','\o'};
	//char naam[]="kuldeep";
	//char class[]="apna college";
	
	/*char firstname[]="kuldeep";
	char lastname[]="ghorpade";
	
	printstring(firstname);
	printstring(lastname);*/
	
//Q48 ask the user to enter their firstname and print it back to them
    /*char firstname[50];
	scanf("%s",firstname);
	printf("Your name is : %s",firstname);*/
	
	
// using string functions ==> gets(str) and puts(str)
	/*char name[100];
	gets(name);   //gets(str) function
	puts(name);   //puts(str) function*/
	
	/*char sentence[100];
	fgets(sentence, 100,stdin); //fgets(str, size, stdin) function
	puts(sentence);*/  

	
//STRING USING POINTERS
/*char *canchange = "hello world";    //can change (pointers)
puts(canchange);
canchange = "hello kuldeep";
puts(canchange);*/

/*char cannotchange[]="hello world";  //cannot change(arrays) 
puts(cannotchange);*/

//counts the length of a string
/*char name[100];
fgets(name,100,stdin);
printf("lenght is : %d",countlength(name)); */

//---------------STRING FUNCTIONS---------------------

// 1] STRLEN(STR)	
/*char name[100];
gets(name);
//puts(name);

printf("length is : %li",strlen(name));*/

// 2] STRCPY(NEWSTR, OLDSTR)

/*char oldstr[]="oldstring";
char newstr[]="newstring";
strcpy(newstr, oldstr);
printf(newstr);*/
	
// 3]  strcat(firststr, secstr) string concatenation
	
	/*char firststr[100]="hello ";
	char secstr[]="world";
	
	strcat(firststr, secstr);
	puts(firststr);*/
	
// 4] strcmp(firststr, secstr)	Compares string
	
	/*char firststr[]="apple";
	char secstr[]="bannana";
	
	printf("%d",strcmp(firststr, secstr));*/
	
// Q50 take a string input from the user using %c	
	
	/*char str[100];
	char ch;
	int i = 0;
	
    while(ch != '\n'){
    	scanf("%c",&ch);
    	str[i]=ch;
    	i++;
	}
	str[i]='\0';
	puts(str);*/
	
//Q51 salting
/*find the salted form of a password entered by user if the
salt is "123" and added at the end*/
	
	/*char password[100];
	scanf("%s",password);
	salting(password);*/

	
//Q52
/* write a function named slice, which takes a string
 and returns a sliced string from index n to m */
 
	/*char str[]="helloworld";
	slice(str,3,6);*/
	
//Q53 
/* write a function to count the occurrence of vowels in a string*/
	
	//vowels
	/*char str[]="kuldeepghorpade";
	printf("vowels are : %d\n",countvowels(str));
	
	//Vowels, Total length, Consonents  
	int vowels=countvowels(str);
	printf("vowels : %d\n",vowels);
	
	int strlength=strlen(str);
	printf("total length : %d\n",strlength);
	
	int consonents = strlength-vowels;
	printf("consonents : %d",consonents);*/
	

//Q54 check if given character is present in string or not

 char str[]="kuldeep ghorpade";
 char ch = 'e';
 checkchar(str,ch);
	
	
	
	
	
	

	
	
	return 0;
}

//--------------------------------------------------------------
void printstring(char arr[]){
	for(int i=0; arr[i] != '\0'; i++){
		printf("%c", arr[i]);
	}
}

int countlength(char arr[]){
	int count = 0;
	for(int i=0; arr[i]!='\0'; i++){
		count++;
	}
	return count-1;
}

//salting
void salting(char password[]){
	char salt[]="123";
	char newpass[200];
	
	strcpy(newpass, password); //newpass="test"
	strcat(newpass,salt); //newpass = "test"+"123"
	puts(newpass);
}

//slice
void slice(char str[],int n, int m){
	char newstr[100];
	int j=0;
	for(int i=n; i<=m; i++, j++ ){
		newstr[j]=str[i];
	}
	newstr[j]='\0';
	puts(newstr);
}

//vowels
int countvowels(char str[]){
	int count = 0;
	
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			count++;
		}
	}
	return count;
}

//check charcter 
void checkchar(char str[], char ch){
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]==ch){
			printf("charcter is present");
			return;
		}
	}
	printf("charcter is not present");
}




