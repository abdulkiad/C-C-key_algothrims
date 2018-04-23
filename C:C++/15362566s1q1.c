/*Write a program in C that inputs one six-digit number from the keyboard and prints the
number again and on a new line prints the digits separated from one another by four spaces
each. [Use combinations of integer division and the remainder operation (% operator)]. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main (void)
{
	
	int a,i; //intialising varibles
	
	printf("enter six digits\n"); 
	scanf("%d",&a);//taking user input
	printf("your six digits are %d\n",a);
   int s=100000; //intialize s to be 100000
   
   printf("\n\t-----------SEPARATED-------------\n");
		for(i=0;i<6;i++) // loop to seperate them
	{
		//printing them seperately
        printf("%d\t",a/s);
		a= a%s;
        s /=10;  
				
	}
	return 0;
	}
	
