/*
Algorithm:
   Note 1: a 3D array of 5 pages/slices, 4 rows, and
   3 columns is created in main( )... the pages/
   slices represent students (each page/slice is
   a student), the rows represent courses (each
   student takes 4 courses), and the columns
   represent exams (each course has 3 exams)

   Note 2: a 1D array of 5 elements is created in
   main( )... each element of this array represents
   the average test score of each of the 5 students

   Note 3: the only 5 memory objects allowed in 
   main( ) are the 3D array, the 1D array, and 3
   individual integer variables

   Note 4: you may not use global variables

   1. In a programmer-created function (PCF) named
      populate( ), populate the 3D array with 
      random test scores between 50 and 100... use
      the srandom( ), the random( ), and the % to
      accomplish this task

   2. In a programer-create function (PCF) named
      display( ), print the the screen the contents 
      of the 3D array... your ouput should be 5 
      different 2D tables of rows(exams) and columns
      (test scores)

   3. In a programmer-created function (PCF) named
      determine_avg( ), determine each student's 
      average test score... remember, each of the
      five students has 12 test scores... record 
      the average test score for each student into 
      the 1D array

   4. In a programmer-created function (PCF) named
      display_avg( ), print to the screen each 
      student's average test score

   5. Terminate
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Start Function Prototypes
int populate(int data[][4][3]);

int display(int data[][4][3]);

int determine_avg(int data[][4][3], float avg[]);

int display_avg(float avg[]);

int main (void)
{
   //Local variables created... no other local
   //variable are allowed in the main( )
   int data [ 5 ][ 4 ][ 3 ] = { 0 } ;
   float avg [ 5 ] = { 0.0 } ;
   int students = 5 , courses = 4 , exam = 3 ;

   //1. In a programmer-created function (PCF) named
   //   populate( ), populate the 3D array with 
   //   random test scores between 50 and 100... use
   //   the srandom( ), the random( ), and the % to
   //   accomplish this task
	populate(data);

   //2. In a programer-create function (PCF) named
   //   display( ), print to the screen the contents 
   //   of the 3D array... your ouput should be 5 
   //   different 2D tables of rows(exams) and columns
   //   (test scores)

		//Added formatting, labels, function call
	printf("\n	        STUDENT GRADES PER COURSE\n");
	printf("\n                  ~3 exams per course~");
	printf("\n\n           Course 1   Course 2");
	printf("   Course 3   Course 4");
	display(data);

   //3. In a programmer-created function (PCF) named
   //   determine_avg( ), determine each student's 
   //   average test score... remember, each of the
   //   five students has 12 test scores... record 
   //   the average test score for each student into 
   //   the 1D array

		//Function call
	determine_avg(data, avg);

   //4. In a programmer-created function (PCF) named
   //   display_avg( ), print to the screen each 
   //   student's average test score

		//More formatting and labels plus function call
	printf("	        STUDENT OVERALL AVERAGE\n\n");
	display_avg(avg);

   //5. Terminate
   return 0 ;

}

//Start Of Function Defenitions

		//Population function
int populate(int data[][4][3]){
int i, j, k, n;
float avg[5] = {0.0};
int students = 5 , courses = 4 , exam = 3 ;
float sum = 0.0;

	//Seed random numbers
srandom(( unsigned) time(NULL));

	//Loops to fill array
for (i = 0; i < students; i++){
        for (j = 0; j < courses; j++){
            for (k = 0; k < exam; k++){
				//Random function between 50 and 100
                data[i][j][k] = random() % (101 + 1 - 50) + 49;
   }
  }
 }
}

		//Displays data array
int display(int data[][4][3]){
int i, j, k, n;
float avg[5] = {0.0};
int students = 5 , courses = 4 , exam = 3 ;
float sum = 0.0;

	printf("\n\n");
		//formatting that displays grades
for (i = 0; i < students; i++){
		printf("Student %d: ", i + 1); 
        for (j = 0; j < courses; j++){
            for (k = 0; k < exam; k++){
		// if statement for formatting
		if ((k + 1) % 3 == 0){
		printf("%d | ", data[i][j][k]);

     }
		else {
                printf("%d ", data[i][j][k]);
    }
   }
  }
		printf("\n\n");
 }
}

		//Determine average function
int determine_avg(int data[][4][3], float avg[]){
int i, j, k;
int students = 5 , courses = 4 , exam = 3 ;
float sum = 0.0;

		//Goes through the array and adds to sum
	for (i = 0; i < students; i++){	
        	for (j = 0; j < courses; j++){
            		for (k = 0; k < exam; k++){
                	sum += data[i][j][k];	
   }
  }	
		//Sum is divided by how many exams there are
	avg[i] = sum / 12.0;
	sum = 0.0;
 }
}

		//Display the students average
int display_avg(float avg[]){
int data [ 5 ][ 4 ][ 3 ] = { 0 } ;
int i, j, k;
int students = 5 , courses = 4 , exam = 3 ;
float sum = 0.0;

		//Goes through array and displays averages to 2 decimals
for (i = 0; i < 5; i++){
	printf("Student %ds average: %.2f \n\n", i + 1, avg[i]);
 }
}
