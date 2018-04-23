/*Write a C program which is used to keep track of the number of cars in a carpark. The
program should have four functions, one which is called when a car enters the carpark and
one which is called when a car exits the car park. It costs €2 to park a car so a third function
should keep a track of total amount of money that has been taken in and print that to the
screen. The final function should report the current number of cars in the carpark. Provide
test code in the main function to demonstrate the program.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
unsigned int total_cars = 0; //global variable
//function prototypes
int car_entry(int total);
int car_exit(int total);
int money(int total_cars);
void total_money(int c);

//function to add one each time a car enters
int car_entry(int total)
{
	return total_cars += 1;
}
//function to remove one car when it exits from the present time 
int car_exit(int total)
{
	return total_cars -= 1;
}
//function which multiplies each entry by two
int money(int b)
{
	return b*=2;
}
//function which finds the total money earned
void total_money(int c)
{
	printf("Total money earned\n %d euro\n",money(c));
}

int main()
{
	int input;
	int increment = 0;
	//instructions for user
	printf(
	"Enter 1 if a car enters\n"
	"Enter 2 if a car exits\n"
	"Enter 3 to see total capital\n"
	"enter 0 to end\n");
	scanf("%d", &input);
	
	while(input != 0) //loop
	{
		switch(input)
		{
			// conditions
			case 1:
				increment++;
				printf("There are now %d cars:\n",car_entry(total_cars));  // cars entering
				break;
			case 2:
				printf("There are now %d cars:\n",car_exit(total_cars)); //cars exting
				break;
			case 3:
				total_money(increment); //total money
				break;
			case 0:
				return 0;
		}
		scanf("%d", &input);
	}
}

