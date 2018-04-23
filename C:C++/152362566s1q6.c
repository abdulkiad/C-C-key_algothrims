/* The UN state children are defined as living in over-crowded dwellings when there is a ratio
of more than two people per room (excluding bathrooms but including kitchen and living
room). The over-crowding ratio is obtained by dividing the total number of household
members by the total number of rooms occupied by the household. Thus, a dwelling with
two bedrooms, a kitchen and sitting-room would be defined as over-crowded if there were
more than eight people living in it. Write a C program that calculates if a child is living in an
over-crowded dwelling based on user input from the keyboard. The program should output
an indication if the child lives in an over-crowded dwelling or not.*/
//PSEUDOCODE
//declare variable
// Ask user for input and sotre input
//calculate ratio by dividing the number of people with the number of rooms
//dispaly ratio
//set up conditions to find where the dwelling is over-crowded or not
//if and else statement
 //if more than 2 people in one room then the house is overcrowded
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (void)
{  //declaring varibales
	double people;
	double rooms;
	double ratio;
	//user input
	printf("enter the number of people u have in the house\n");
	scanf("%lf",&people);
   	printf("please enter the number of rooms you have in the house(excluding the bathroom)\n");
	scanf("%lf",&rooms);	
	
	         //ratio calculations
         	ratio = (people/rooms);
		printf("The over-crowding ratio is %.2lf\n",ratio);
       
	   //conditions to find where the dwelling is over-crowded or not
	   rooms*= 2;
		if(rooms<people) //if more than 2 people in one room then the house is overcrowded
		
		{
			printf("The child is living in an over-crowded dwelling\n");
		}

       else
	   	
	{
		printf("The child is not living in an over-crowded dwelling");
	}
	
}
