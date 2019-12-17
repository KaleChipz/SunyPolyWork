/*
   1. Obtain first names for each of 10 students
	x  Store in an array named fn_array
        x  Use a PCF named get_first( )
        x  Use data file /home/faculty/urbanc/ghp2567fn.day
	x  Rows represent students.
   2. Obtain last names  for each of 10 students
	x  Store in an array named ln_array
        x  Develop and use a PCF names get_last( )
        x  Use data file /home/faculty/urbanc/ghp2567LN.dat
	x  Rows represent students.
   3. Obtain 5 test scores for each of 10 students
	x  Store in an array named scores_array
        x  Develop and use a PCF named get_scores( )
	x  Use data file /home/faculty/urbanc/ghp2567scores.dat
        x  Rows represent students; columns represent tests
   4. Determine the average test score for each student.
	x  Store in and array names avgs_array
        x  Develop and use a PCF named computer_avgs ( )
   5. Print the first name, last name, and average test
      score for each of the 10 students
        x  Develop and use a PCF named display.
   6. Terminate
*/

#include <stdio.h>

//PCF Prototypes below
void get_first (char[ ] [15] , int ) ;

void get_last (char[ ] [15] , int ) ;

void get_scores (int[ ] [5] , int, int ) ;

void computer_avgs (int [ ] [5] , double [10] , int , int) ;

void display( char [ ] [15] , char [ ] [15] , double [ ] , int );

int  main ( void )
{
   //Local variables created below
   char fn_array [10][15] = {' '} ;
   char ln_array [10][15] = {' '} ;
   int scores_array [10][5] = {0} ;
   double avgs_array[10] = {0.0}  ;
   int rows = 10 , cols = 5 ;

   //1. Obtain first names for each of 10 students
   //	  Store in an array named fn_array
   //     Use a PCF named get_first( )
   //     Use data file /home/faculty/urbanc/ghp2567fn.day
   //	  Rows represent students.
   get_first( fn_array , rows ) ;

   //2. Obtain last names  for each of 10 students
   //     Store in an array named ln_array
   //     Develop and use a PCF names get_last( )
   //     Use data file /home/faculty/urbanc/ghp2567LN.dat
   //	  Rows represent students.
   get_last( ln_array , rows ) ;

   //3. Obtain 5 test scores for each of 10 students
   //     Store in an array named scores_array
   //     Develop and use a PCF named get_scores( )
   //     Use data file /home/faculty/urbanc/ghp2567scores.dat
   //     Rows represent students; columns represent tests
   get_scores( scores_array , cols, rows ) ;

   //4. Determine the average test score for each student.
   //     Store in and array names avgs_array
   //     Develop and use a PCF named computer_avgs ( )
   computer_avgs( scores_array , avgs_array , rows , cols );


   //5. Print the first name, last name, and average test
   //   score for each of the 10 students
   //     Develop and use a PCF named display.
   display( fn_array , ln_array , avgs_array , rows ) ;


   //6. Terminate
   return ( 0 ) ;

}

//PCF Definitions below
// 1
void get_first (char zzz[ ] [15] , int r )
{
   FILE * read_ptr = NULL ;
   int rows =0 ;

   read_ptr = fopen("/home/faculty/urbanc/ghp2567fn.dat" , "r");

   if (read_ptr == NULL)
   {
      printf("\n\nghp2567fn.dat not opened.\n") ;
   }
   else
   {
      printf("\n\nghp2567fn.dat opened properly.\n") ;
      for ( rows = 0 ; rows < r ; rows++)
      {
        {
	     fscanf(read_ptr, "%s" , zzz[rows]) ;
        }
      }
    }

    return ;

}

// 2
void get_last (char zzz[ ] [15] , int r )
{
   FILE * read_ptr = NULL ;
   int rows =0 ;

   read_ptr = fopen("/home/faculty/urbanc/ghp2567LN.dat" , "r");

   if (read_ptr == NULL)
   {
      printf("\n\nghp2567LN.dat not opened.\n") ;
   }
   else
   {
      printf("\n\nghp2567LN.dat opened properly.\n") ;
      for ( rows = 0 ; rows < r ; rows++)
      {
        {
	     fscanf(read_ptr, "%s" , zzz[rows]) ;
        }
      }
    }

    return ;

}

//3
void get_scores (int zzz[ ] [5] , int r , int c )
{
   FILE * read_ptr = NULL ;
   int rows = 0 ;
   int cols = 0 ;
   read_ptr = fopen("/home/faculty/urbanc/ghp2567scores.dat" , "r");

   if (read_ptr == NULL)
   {
      printf("\n\nghp2567scores.dat not opened.\n\n\n") ;
   }
   else
   {
      printf("\n\nghp2567scores.dat opened properly.\n\n\n") ;
      for ( rows = 0 ; rows < r ; rows++)
      {
        for ( cols = 0; cols < c; cols++ ) {
	     fscanf(read_ptr, "%d" , &zzz[cols][rows]) ;
        }
      }
    }

    return ;

}

//4
void computer_avgs (int scores_array [ ] [5] , 
	      double avgs_array [10] , int rows , int cols) {

int i = 0 ; 
int j = 0 ;
double rowsum = 0 ;

   for (i = 0; i < rows; i++)
	{
	 for (j = 0; j < cols; j++)
           rowsum +=  scores_array[i][j];
           avgs_array[i] = rowsum / cols;
	   rowsum = 0 ;
   }
return ;
}

//5
void display( char fn_array[][15], char ln_array[][15], 
                  double avgs_array[], int rows ) {

int i = 0 ;

    for (i = 0; i < rows; i++){ 
	printf("%s %s: %.2f\n\n", fn_array[i], ln_array[i], avgs_array[i]);
 }
return;
}
