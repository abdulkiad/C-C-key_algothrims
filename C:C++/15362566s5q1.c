/*Write a C Program which prompts the user for employee records and then writes each
record to a file called employees.txt The user should be prompted to enter each employee’s
first name, surname, personnel number, phone number, role, department and salary (in
euros). Be careful to provide code to allow a user to indicate they have stopped inputting
data and to check for invalid data. The result should be a text file with several employee
details.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char arr[1000][3000];




int main (void)

{  //variables
	char personalnumber[10];
	int phonenumber;
	char Fname[7];
	char surname[7];
	char role[10];
	char department[10];
	int salary;
	//asking for user input
	    printf("enter your first name please:\n");
	scanf("%s",Fname);
		printf("enter your  surname please:\n");
	scanf("%s",surname);
		printf("enter your personal number please:\n");
	scanf("%d",&personalnumber);
		printf("enter your phone-number please:\n");
	scanf("%d",&phonenumber);
		printf("enter your department please:\n");
	scanf("%s",department);
		printf("enter your role please:\n");
	scanf("%s",role);
		printf("enter your salary please per week to the nearest whole number :\n");
	scanf("%d",&salary);
	
	//opening file
	int numberOfLine = 0; //linecount for the results for the first file

	FILE *fp = fopen("C:\\Users\\User\\Desktop\\porfolio15362566\\employees.txt", "a+" );  
	// This will take each row in the file and store it in arr.
	if (fp == NULL ){ /* check does playlist file exist etc */
		perror ("Error occured ");
		numberOfLine = -1; /* use this as a file not found code */
	} else
		// fgets returns NULL when it gets to the end of the file
		while ( fgets( arr[numberOfLine], sizeof(arr[numberOfLine]), fp ) != NULL ) {
			numberOfLine++;
		}	
	fprintf(fp,"\n%s\t\t%s\t\t%d\t\t%d\t\t%s\t\t%s\t\t%d",Fname,surname,personalnumber,phonenumber,department,role,salary); //printing in the txt file
	fclose (fp);	
}
