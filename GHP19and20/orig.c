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

int main (void)
{
   //Local variables created
   int data [ 4 ] [ 8 ] = { 0 } ;
   int total_rows [ 4 ] = { 0 } ;
   int total_cols [ 8 ] = { 0 } ;
   int col = 0, row = 0 ;

   //Seed the random function based upon server time at execution
   srandom ( ( unsigned ) time( NULL ) ) ;

   //1. Populate data array with random integers
   //between 1 and 9
   for  (row = 0 ; row < 4 ; row = row + 1 )
   {
      for (col = 0 ; col < 8 ; col = col +1 )
      {
         data [ row ] [ col ] = (random( ) % 9) + 1  ;
      }
   }

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
   printf("\n\n") ; //Added for spacing of output

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

   //7. Terminate
   return 0 ;
}
