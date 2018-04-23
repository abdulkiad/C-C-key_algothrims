/*Write a function to calculate the maximum of 3 integers. Use this function in a C program to
output the maximum of 12 numbers. You may only use functions from the stdio C library.*/
#include <stdio.h>
double max(int a, int b, int c);//function prototype 
double max(int a, int b, int c)//function
{
	int max = a;
	if(b>=a && b>=c)//Checks if b is bigger than a and c
	{
		max = b;
	}
	if(c>=a && c>=b)//Checks if c is bigger than a and b
	{
		max = c;
	}
	return max;
}
int main(void)
{
	int i;
	int j=0;
	int biggest;
	int maximum[4];//Array to store the first set of maximum numbers
	int x[12];
	printf("Enter 12 numbers below to find the maximum\n");
	for(i=0;i<12;i++) //ask 12 times
	{	
	printf("\n\nPlease enter  a number\n");
	scanf("%d", &x[i]);//taking user input
	}
	for(i=0;i<12;i+=3)
	{
		maximum[j] = max(x[i], x[i+1], x[i+2]);//calling max function and the maximum numbers are stored in an array
		j++;
	}
	biggest = max(maximum[0], maximum[1], maximum[2]);//calling of function , using the first three of the biggest numbers we got from the first time
	if( maximum[3] > biggest)// Finding  the biggest out of the biggest ones we stored in the array.
	{
		biggest = maximum[3];
	}
	printf("The maximum number out of the 12 numbers is: \n %d", biggest);//printing max
	return 0;
}
