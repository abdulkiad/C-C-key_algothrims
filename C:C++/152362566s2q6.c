/*Conversion of binary to decimal (base-2 to base-10) numbers and back is an important
concept to understand as the binary numbering system forms the basis for all computer and
digital systems. Using recursive techniques, write a C program to convert a decimal to
binary. To show your understanding and reasoning of the approach, provide a
demonstration of how the conversion works in comments at the start of the program*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 
int convert(int dec);// function prototype
 
int main(void)
{
    int dec, binaryN; //intialising varibles
 
    printf("Enter any decimal number:\n");
    scanf("%d", &dec); //taking user input
    
    binaryN = convert(dec); //calling of function
    
    printf("The binary number of %d decimal  is:\n %d", dec, binaryN); //printing the binary number
    
    return 0;
}
 
int convert(int dec) //function
{
	// function to convert to binary
    if (dec == 0) 
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2)); //recursion step
    }
}
