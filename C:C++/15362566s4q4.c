// Speed Racers Skeleton Code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void moveRedCar( int *redPtr);
void moveBlueCar( int *bluePtr);
void moveSilverCar(int *silverPtr);
void printCurrentPositions(unsigned int, unsigned int, unsigned int);




// progress for the Blue Car
void moveBlueCar( int *bluePtr)
{
   //^^generate random number from 1-10
   int x = 1+rand()%10;
   // determine progress
   if (x >= 1 && x <= 5) { // full speed 50% of the time
      *bluePtr += 3;
   }
   //^^Test all the rules from the specification.
   else if (x>=6 && x<=8)
   {
     *bluePtr += 1;
   }
   else if (x==9)
   {
     *bluePtr += 0;
   }
   else if (x==10)
   {
     *bluePtr -= -2;
   }

    // check boundaries
   if (*bluePtr < 1) {
      *bluePtr = 1;
   }
   if (*bluePtr > 100) {
      *bluePtr = 100;
   }

   //checks if the car has hit an oil spill
   if((*bluePtr == 5) || (*bluePtr == 18) || (*bluePtr == 20) || (*bluePtr == 31) || (*bluePtr == 40) || (*bluePtr == 45) || (*bluePtr == 60) || (*bluePtr == 62) || (*bluePtr == 63) || (*bluePtr == 63) || (*bluePtr == 64) || (*bluePtr == 80) || (*bluePtr == 92) || (*bluePtr == 99))
   {
	   //if so, move it back to the start
	   int backToStart = 1;
	   *bluePtr = backToStart;
   }

}

// ^^write fuction to move for the Red Car as per rules.
void moveRedCar( int *redPtr)
{
   //^^generate random number from 1-10
   int x = 1+rand()%10;
   // determine progress
   if (x >= 1 && x <= 5) { // full speed 50% of the time
      *redPtr += 3;
   }
   //^^Test all the rules from the specification.
   else if (x>=6 && x<=8)
   {
     *redPtr += 1;
   }
   else if (x==9)
   {
     *redPtr += 0;
   }
   else if (x==10)
   {
     *redPtr -= -2;
   }

    // check boundaries
   if (*redPtr < 1) {
      *redPtr = 1;
   }
   if (*redPtr > 100) {
      *redPtr = 100;
   }

   //checks if the car has hit an oil spill
   if((*redPtr == 5) || (*redPtr == 18) || (*redPtr == 20) || (*redPtr == 31) || (*redPtr == 40) || (*redPtr == 45) || (*redPtr == 60) || (*redPtr == 62) || (*redPtr == 63) || (*redPtr == 63) || (*redPtr == 64) || (*redPtr == 80) || (*redPtr == 92) || (*redPtr == 99))
   {
	   //if so move it back to the start
	   int backToStart = 1;
	   *redPtr = backToStart;
   }

}

void moveSilverCar( int *silverPtr)
{
   //^^generate random number from 1-10
   int x = 1+rand()%10;
   // determine progress
   if (x==1)
   { // full speed 10% of the time
      *silverPtr += 4;
   }
   //^^Test all the rules from the specification.
   else if (x>=2 && x<=5)
   {
     *silverPtr += 2;
   }
   else if (x>=6 && x<=7)
   {
     *silverPtr += 1;
   }
   else if (x==8)
   {
     *silverPtr += 0;
   }
   else if (x>=9 && x<=10)
   {
     *silverPtr -= -2;
   }

    // check boundaries
   if (*silverPtr < 1) {
      *silverPtr = 1;
   }
   if (*silverPtr > 100) {
      *silverPtr = 100;
   }

   //checks if the car has hit an oil spill
   if((*silverPtr == 5) || (*silverPtr == 18) || (*silverPtr == 20) || (*silverPtr == 31) || (*silverPtr == 40) || (*silverPtr == 45) || (*silverPtr == 60) || (*silverPtr == 62) || (*silverPtr == 63) || (*silverPtr == 63) || (*silverPtr == 64) || (*silverPtr == 80) || (*silverPtr == 92) || (*silverPtr == 99))
   {
	   //if so move it back to the start
	   int backToStart = 1;
	   *silverPtr = backToStart;
   }

}

// display new position
void printCurrentPositions(unsigned int redCar, unsigned int blueCar, unsigned int silverCar)
{
	unsigned int count;
   // loop through race
   for (count = 1; count <= 100; count++)
   { // going to print 100 characters to screen - either R, B, Y, T or a space This will allow users to                                                               see where the two cars are in relation to each otehr and the track.
      // print current leader
      if (count == redCar && count == blueCar && count == silverCar) {
         //^^ print appropriate statement
         printf("T");
      }
      else if (count == blueCar) {
          //^^ print appropriate statement
          printf("B");
      }
      else if (count == redCar) {
          //^^ print appropriate statement
          printf("R");
      }
      else if (count == silverCar) {
          //^^ print appropriate statement
          printf("S");
      }
      else {
         printf("%s", " ");  //pint a space if the postion of the red, blue or silver car is not at the count.
      }
   }

   puts("");
      puts("");

}
int main(void)
{
   srand(time(NULL));

   int redCar = 1; // red car current position
   int blueCar = 1; // blue car current position
   int silverCar = 1;// silver car current position

   printf("The Race has started\n");

   // loop through the progress on the track
     while (redCar != 100 && blueCar != 100 && silverCar != 100)
     { //neither car has reached the end of the track
      //^^call the 2 functions to move cars on the track here
      moveRedCar(&redCar);
      moveBlueCar(&blueCar);
      moveSilverCar(&silverCar);
      printCurrentPositions(redCar, blueCar, silverCar);
     }



   // determine the winner and print message - one car has passed the end as it is outside the loop.
   if ((redCar > blueCar) && (redCar > silverCar))
   {
      //^^print outcome
      printf("The red car wins!!");
   }
   else if ((blueCar > redCar) && (blueCar > silverCar))
   {
      //^^print outcome
      printf("The blue car wins!!");
   }
   else if ((silverCar > blueCar) && (silverCar > redCar))
   {
      //^^print outcome
      printf("The silver car wins!!");
   }
   else if (redCar == blueCar)
   {
      //^^print outcome
      printf("Red Car and Blue Car Draw!!");
   }
   else if (silverCar == blueCar)
   {
      //^^print outcome
      printf("silver Car and Blue Car Draw!!");
   }
   else if (silverCar == redCar)
   {
      //^^print outcome
      printf("silver Car and Red Car Draw!!");
   }
   else if (silverCar == redCar == blueCar)
   {
      //^^print outcome
      printf("Its a Tie!!!");
   }
 }
