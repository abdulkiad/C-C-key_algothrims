/*Write a C Program to demonstrate the address structure in arrays. The program should
create 3 arrays of different numeric types and then print the address of each element of
each array to the screen. Format the output so that it is easy to understand. You should
notice that the gap between addresses is equal to the size in bytes of the type of the array. */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <stdbool.h>
int main()
{

	// declaring 3 different numeric array types
int i;
int arr1[7]={4,5,6,7,8,9};
float arr2[9]={8,7,6,5,4,3,2,1};
double arr3[8]={7,8,9,10,11,12,13};
	// print the addresses and size of each array element
	//First one int array
	printf("Address Structure in Arrays of Int type: \n");
	for(i=0; i<6; i++)
	{
		printf("\n Number %d of int array has the address:\t%p",i, &arr1[i]);//printing address of int array
	}
	printf("\nAn integer is %lu bytes\n", sizeof(arr1[1]));
	printf("If you look at the gap between the addresses you can see that it is equal to the size in bytes of the type of array\n");
	printf("\n\n\n");
	//second one float array
	printf("Address Structure in Arrays of Float type: \n");
	for(i=0; i<8; i++)
	{
		printf("\n Number %d of float array has the address:\t%p",i, &arr2[i]);//printing address of float array
	}
	printf("\nA float is %lu bytes\n", sizeof(arr2[1])); //printing the bites of one array place
	printf("If you look at the gap between the addresses you can see that it is equal to the size in bytes of the type of array\n");
	printf("\n\n\n");
	//third one double array
	printf("Address Structure in Arrays of Double type: \n");
	for(i=0; i<7; i++)
	{
		printf("\n Number %d of double array has the address:\t%p",i, &arr3[i]); //printing address of double arr
	}
	printf("\nA double is %lu bytes\n", sizeof(arr3[1])); //printing the bites of one array place
	printf("If you look at the gap between the addresses you can see that it is equal to the size in bytes of the type of array\n");
	printf("\n\n\n");


	
}
