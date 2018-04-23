// My own code to demonstrate class and objects includes member functions ...
// A c++ code to find the volume of boxes using 2 objects
#include <iostream>
#include<string>
using namespace std;
//class
class Box //storing info in the class BOX
{
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

     
// Member functions to get total volume
double getVolume(void)
{
    return length * breadth * height;
}

void setLength( double len ) // Member functions to get length
{
    length = len;
}

void setBreadth( double bre )// Member functions to get breadth
{
    breadth = bre;
}

void setHeight( double hei ) // Member functions to get height
{
    height = hei;
}

};

int main(void)
{ //objects
   Box Box1;        // Declaring Box1 of type Box
   Box Box2;        // declaring Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
   int a,b,c,d,e,f;
   cout<<"----------Box1-----------\n";
   //user input
 cout<<"Enter the height:   " ;
 cin>>a;
  cout<<"Enter the length:   " ;
  cin>>b;
   cout<<"Enter the breadth:   ";
    cin>>c;
   // box 1 specification
   Box1.setHeight(a); 
   Box1.setLength(b); 
   Box1.setBreadth(c);
      cout<<"\n----------Box2-----------\n";
//user input
 cout<<"Enter the height:   " ;
 cin>>d;
  cout<<"Enter the length:   " ;
  cin>>e;
  cout<<"Enter the breadth:   "; 
cin>>f;
   // box 2 specification
   Box2.setHeight(d);
   Box2.setLength(e);
   Box2.setBreadth(f);
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth; //volume formula
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth; //volume formula
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}
