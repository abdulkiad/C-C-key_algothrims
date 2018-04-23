/*Write a C Program that defines and uses a macro which calculates the maximum of 2
integers. Extend this program with another macro to calculate the maximum of 4 integers.
This extended program must use the macro which calculates the maximum of 2 integers.
Submit the extended program. The program should get the input from the user from the
console and print the result to the console.*/

#include <stdio.h>
//macro to find max
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MAX4(a,b,c,d) (MAX(a,b) > MAX(c,d) ? MAX(a,b) : MAX(c,d))
//finding the max using two numbers at a time

int main ()
{ //declaring varibales
  int a=0;
  int b=0;
  int c = 0;
  int d=0;

  printf("Please enter 4 numbers  \n");
  printf("Enter the first number :\n");
  scanf("%d", &a); //user input
  printf("Enter the second number: \n");
  scanf("%d", &b); //user input
  printf("Enter the thrid number: \n" );
  scanf("%d", &c);//user input
  printf("Enter the fourth number Please: \n");
  scanf("%d", &d); //user input

  printf("The maxium number amongst the numbers %d %d %d %d that you entered is:\n %d ", a,b,c,d,MAX4(a,b,c,d)); //calling the macro function and printing out the
  //maxium

  return 0;
}	
