Missing rows/cols info in function_1( ) parameters/arguments.

Score: 19/20

/*
Algorithm:
   1. Populate data array with random integers
      between 1 and 9
   2. Display the contents of the data array in 2D
      table form
   3. Determine the total of each row and save
      each row's total to the total_rows array
   4. Display the total of each row by using the 
      total_rows array
   5. Determine the total of each column and save
      each column's total to the total_cols array
   6. Display the total of each column in the 
      total_rows array
   7. Terminate
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//START OF PROTOTYPES
int function_1(int data[][8]);

int function_2(int row, int col, int data[][8]);

int function_3(int row, int col, int data[][8]);

int function_4(int row, int col, int data[][8]);

//Start of Main
int main (void)
{
   //Local variables created

   int data [ 4 ] [ 8 ] = { 0 } ;
   int total_rows [ 4 ] = { 0 } ;
   int total_cols [ 8 ] = { 0 } ;
   int col = 0, row = 0 ;

//Function 1
	  function_1(data);

//Function 2   
	  function_2(4, 8, data);

   printf("\n\n") ; //Added for spacing of output

//Function 3

	  function_3(4, 8, data);

//Function 4
	  function_4(4, 8, data);

//7. Terminate
   return 0 ;
}

//START OF PCF DEFs

// Function 1 definition
int function_1(int data[][8]){

   int total_rows [ 4 ] = { 0 } ;
   int total_cols [ 8 ] = { 0 } ;
   int row = 0, col = 0;


// Seeding random values
   srandom ( ( unsigned ) time( NULL ) ) ;

//   1. Populate data array with random integers
//      between 1 and 9

   for  (row = 0 ; row < 4 ; row = row + 1 )
   {
      for (col = 0 ; col < 8 ; col = col +1 )
      {
          data [ row ] [ col ] = (random( ) % 9) + 1  ;
      }
   }
}

// Function 2 definition
int function_2(int row, int col, int data[][8]){

   int total_rows [ 4 ] = { 0 } ;
   int total_cols [ 8 ] = { 0 } ;
  
 //2. Display the contents of the data array in 2D
   //   table form

	for  (row = 0 ; row < 4 ; row = row + 1 )
   	{
      	printf("\n") ;
      	for (col = 0 ; col < 8 ; col = col +1 )
      	{
         	printf(" %d " , data [ row ] [ col ] )  ;
      	}
   }
}

// Function 3 definition
int function_3(int row, int col, int data[][8]){

   int total_rows [ 4 ] = { 0 } ;
   int total_cols [ 8 ] = { 0 } ;
   
   //3. Determine the total of each row and save
   //   each row's total to the total_rows array
   for  (row = 0 ; row < 4 ; row = row + 1 )
   {
      for (col = 0 ; col < 8 ; col = col + 1 )
      { 
         total_rows [ row ] = total_rows[ row ] + 
                data[ row ] [ col ]  ;
      }
   } 

   //4. Display the total of each row by using the 
   //   total_rows array
   for  (row = 0 ; row < 4 ; row = row + 1 )
   {
      printf("\n row %d total: %d" , row , total_rows [ row ] ) ;
   }
}


// Function 4 definition
int function_4(int row, int col, int data[][8]){

   int total_rows [ 4 ] = { 0 } ;
   int total_cols [ 8 ] = { 0 } ;

   //5. Determine the total of each column and save
   //   each column's total to the total_cols array
   for  (col = 0 ; col < 8 ; col = col + 1 )
   {
      for (row = 0 ; row < 4 ; row = row + 1 )
      { 
         total_cols [ col ] = total_cols[ col ] + 
                data [ row ] [ col ]  ;
      }
   } 
   printf("\n\n") ; //Added for spacing of output

   //6. Display the total of each column in the 
   //   total_rows array
   for  (col = 0 ; col < 8 ; col = col + 1 )
   {
      printf("\n col %d total: %d" , col , total_cols [ col ] ) ;
   }
   printf("\n\n") ; //Added for spacing of output

} 
