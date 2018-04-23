/*Write a C++ Program which has a function template which takes two arguments/variables
and swaps them. The template should work for integers, doubles and chars. Also
demonstrate how to call the template in your program for the different argument types.
(Hint: function must use pass by reference).*/


#include<iostream>
#include<cmath>
using namespace std;
template <class T> //creating my own template


T swaph(T &a, T &b) //function protype using the template passing by reference

{
    

return  (b,a);

}

int main()
{
//decalaring it as int
	int x,y;
	cout<<"enter two numbers for a and b: \n";
	cin>>x>>y; //user input
	cout<<"Numbers entered\n";
	cout<<"a: "<<x<<" b: "<<y<<endl;
	cout<<"Swapped\n";
	cout<<"a: "<<swaph(y,x)<<" b: "<<swaph(x,y)<<endl; //printing swapped int  values using the template
		//decalring as double
 	double v,w;
	cout<<"enter two numbers for a and b: \n";
	cin>>v>>w; //user input
	cout<<"Numbers entered\n";
	cout<<"a: "<<v<<" b: "<<w<<endl; 
	cout<<"Swapped\n";
	cout<<"a: "<<swaph(w,v)<<" b: " <<swaph(v,w)<<endl; //printing swapped double values using the template


//decalring it as char
	char s,t;
	cout<<"enter two characters for a and b: \n";
	cin>>s>>t;//user input
	cout<<"Numbers entered\n";
	cout<<"a: "<<s<<" b: "<<t<<endl;
	cout<<"Swapped\n";
	cout<<"a: "<<swaph(t,s)<<" b: "<<swaph(s,t)<<endl; //printing swapped char values using the template

}
