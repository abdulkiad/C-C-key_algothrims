/*Write a C++ Program which prompts the user to enter their age. The program should
contain a function which determines the user’s age in the year 2040. The function should
have a void return type and have no “print” statements within it. The program should print
the following before it exits “In 2040 you will be x years old”. If the age in 2040 is over 67
then it will additionally print “Maybe you will be retired!”*/
#include<iostream>
#include<cmath>
using namespace std;
void numb_of_years(int &); //function prototype (calling by reference)
int main()
{
	int a;
    cout<<"how old are you are you right now?:\n"; 
    cin>>a; //storing user input
 	numb_of_years(a); //calling if function
	if(a<67) // if the persin is under 67 do the function
	  {
		 cout<<"In 2040 you will be   "<<a<<"   years old"<<endl; //printing if a<67
   	  }
  	else //otherwise tell him this...
       {
       	  		cout<<"In 2040 you will be   "<<a<<"   years old "<<", Maybe you will be retired!"; //printing if a>67

       }
	
	
	

}
void numb_of_years(int &age) //finction to calculate age
{
	
	age= age+(2040-2016); //age calculation
	
	
}
