/*Write a C program that creates a two dimensional integer array. The size of the array should
be specified by user input. The array should then be filled by prompting the user to enter
data (an integer) for each element. It should not be possible to add duplicates to the array.
The program should print the following results:
1. The contents of the array (this should look like a table).
2. The sum of each row.
3. The sum of each column.
4. The sum of all values in the array.
5. The average of each row.
6. The average of each column.
7. The average of the complete array.
8. The frequency of each number which occurs in the array.
9. A random number from the array.*/


#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <stdbool.h>
//function prototypes
int random(int col,int row,int list[][col]);
bool check(int c,int r,int list[][c],int checking);
void print(int col,int row,int list[][col]);
void sumoflist(int row,int col,int list[][col]);


int main()
{
	
    bool s;
	int N ,row,columns;
	printf("Please enter the number of rows\n");
	scanf("%d",&row); //user input for amount of row
	printf("Please enter the number of columns\n");
	scanf("%d",&columns); //user input for amount of columns
	int list[row][columns];
	int i,j;
	
for(i = 0; i < row ; i++)
	{
		for(j = 0; j < columns ; j++)
		{
			
			printf("Please enter a number so it can be stored in the list row %d, column %d: ",i+1 , j+1);
			scanf("%d",&N);
		
          bool s = check(row, columns, list, N);
            if(!s)
			{
			     list[i][j] = N; //insert number  into the list
            } 
			else{
			
            if(j==0){
                    i--; //go back a one row
                    j = columns-1;  //go to last value of j
                }
                else{
                    j--; //go back a column but keep row the same
                }
            }
            
            s = 0;  //reset the bool for checking list
        }
		}
	print(row,  columns, list);//calling of pritning out function
	printf(" A Random Number out of that list is %d \n", randomNumber(row, columns, list) );
    sumoflist(row,columns,list); //calling of sum function
       
	   
	  int freq = 0;
    int v, p, q;
	
	for(i = 0; i < row ; i++)
	{
		for(j = 0; j < columns ; j++)
		{
			v = list[i][j];
				for(p = 0; p < row ; p++)
				{
					for(q = 0; q < columns ; q++)
					{
						if(v == list[p][q])
						  freq++;
					}
				}
			printf("The Fequency of %d : %d\n",v,freq);
			freq = 0; //reset value
		}
	}


}
//printing the matrix
void print(int row, int col, int list[][col])
{
    
    int i, j;
    //loop to go through the multi. array
	for(i = 0; i < row ; i++)
	{
		for(j = 0; j < col ; j++)
		{
			printf("%d ",list[i][j]);
		} printf("\n");
	} 
    
}
int randomNumber(int row, int col, int list[][col]){
    srand(time(NULL)); //allows random function to work
  
    return list[rand()%row][rand()%col]; //returns random number you inputted into the list
}
bool check(int c,int r,int list[][c],int checking)

{
	
	int x,y;
	
	for(x=0;x<r;x++)
	{
		for(y=0;y<c;y++)
		{
			if(list[x][y]==checking)
			{
				return 1;
			}
		}
	}
	return 0;
}

    void sumoflist(int row,int col,int list[][col])
	{     
	int i,j;
	int sum=0;
	int total=0;	
  //column calcultions
	for(j = 0; j < col ; j++)
	{
		for(i = 0; i < row ; i++)
		{
			sum += list[i][j];
            total += list[i][j];
		}
		printf("Sum of Column %d : %d\n",j+1,sum);
		printf("Average of Column %d : %d\n",j+1,sum/col);
		puts("");
		sum = 0;// reset the sum 
	}
    //row calculations
	
		for(i = 0; i < row ; i++)
	{
		for(j = 0; j < col ; j++)
		{
			sum += list[i][j];
			
		}
		printf("Sum of row %d : %d\n",i+1,sum);
		printf("average of row %d : %d\n",i+1,(sum/row));
		puts("");
		sum = 0;
	}printf("Sum of all numbers in the list : %d\n",total);
	printf("Average of all numbers in the list : %d\n",(total/(col*row)));
    	
	}
