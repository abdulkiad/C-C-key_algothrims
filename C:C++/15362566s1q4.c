/*A supermarket is running a new promotion. Customers collect points. For each full euro a
customer spends up to and including €50, they receive 3 points, for each full euro between
€50 and €100 they receive 5 points and for each full euro over €100 they receive 6 points.
Write a C program that asks a user to input the amount spent by customer and prints out
the points awarded to the customer.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (void)
{
	//intailising variables
int points;
int euro;
int i;
int x;
//user money spent input
printf("How much did u spend in euros\n");
scanf("%d",&euro);
//if money less than 50 multiply each euro by three points

	if (euro<=50)

{
 points=euro*3;

	
	printf("\nYou earned %d points",points);
	

}

//condition if money is between 50-100 multiply each euro  between 50-100 by 5 points
if (euro>50&&euro<=100)

{
	euro=euro-50;
	x=50*3;
	points=(euro*5)+x;
	
printf("\nYou earned %d points",points);
	
}
//condition if money is over 100 multiply each euro above 100 by 6points

if (euro>100)
{  
//calculations
euro=euro-100;	
i=(50*3)+(50*5);
points=(euro*6)+i;
printf("\nYou earned %d points",points);
}
	
	
	
	
}

	
	
	
	
	
	
	
	
	
	
	
	

