/*
   1. Obtain first names, last names, and 3 integer
      test scores for each of 12 students
	   Store in an array named records
           Use a PCF named get_records( )
           Use data file /home/faculty/urbanc/ghp289.dat
           The data file is composed as follows:
              column 0: first name
              column 1: last name
              column 2: test score #1
              column 3: test score #2
              column 4: test score #3
	   Each row represents a single student.
   2. Determine the test score average for each 
      student
	   Store in an array named records
           Develop and use a PCF named compute_avgs( )
   3. Determine the letter grade for each student
           Store in an array named records
           Use this scale:
               >= 90 is an A
               >= 80 and less than 90 is a B
               >= 70 and less than 80 is a C
               >= 65 and less than 70 is a D
               < 65 is an F
           Develop and use a PCF named determine_grades( )
   4. Print the first name, last name, and average test
      score and the letter grader for each of the 10 students
           Develop and use a PCF named display( ).
   5. Terminate
*/

#include <stdio.h>

//Structure definition below
typedef struct student { char first_name[15];
                         char last_name[15];
                         int test1;
                         int test2;
                         int test3;
                         float average;
                         char letter_grade;
                       } student ;

//PCF Prototypes below
void get_records(struct student [], int);

void compute_avgs(struct student [], int);

void  determine_grades(struct student [], int);

void display(struct student [], int);

int  main ( void )
{
   //Local variables created below
   student records[12];
   int rows = 12;

   //1. Obtain first names, last names, and 3 integer
   //   test scores for each of 12 students
   //	   Store in an array named records
   //        Use a PCF named get_records( )
   //        Use data file /home/faculty/urbanc/ghp289.dat
   //        The data file is composed as follows:
   //           column 0: first name
   //           column 1: last name
   //           column 2: test score #1
   //           column 3: test score #2
   //           column 4: test score #3
   //	   Each row represents a single student.
	get_records(records, rows);
	printf("\n\n");
   //2. Determine the test score average for each 
   //   student
   //	   Store in an array named records
   //      Develop and use a PCF named compute_avgs( )
	compute_avgs(records, rows);
   //3. Determine the letter grade for each student
   //        Store in an array named records
   //        Use this scale:
   //            >= 90 is an A
   //            >= 80 and less than 90 is a B
   //            >= 70 and less than 80 is a C
   //            >= 65 and less than 70 is a D
   //            < 65 is an F
   //        Develop and use a PCF named determine_grades( )
	determine_grades(records, rows);
   //4. Print the first name, last name, and average test
   //   score and the letter grader for each of the 10 students
   //        Develop and use a PCF named display( ).
	display(records, rows);
   //5. Terminate
   return ( 0 ) ;

}

//PCF Definitions below
//1
void get_records(struct student records [], int r){

FILE * read_ptr = NULL;
int rows = 0;

	read_ptr = fopen("/home/faculty/urbanc/ghp289.dat", "r");

 if (read_ptr == NULL)
   {
      printf("\n\nghp289.dat not opened.\n") ;
   }
   else
   {
      printf("\n\nghp289.dat opened properly.\n") ;

	for (rows = 0; rows < r; rows++){
	 {	
	  	fscanf(read_ptr, "%s", records[rows].first_name);

		fscanf(read_ptr, "%s", records[rows].last_name);
		
		fscanf(read_ptr, "%d", &records[rows].test1);
		fscanf(read_ptr, "%d", &records[rows].test2);
		fscanf(read_ptr, "%d", &records[rows].test3);
   }
  }
 }  
}

//2
void compute_avgs(struct student records [], int r){

int rows = 0;
float rowsum = 0.0;
float rowavg = 0.0;

	for (rows = 0; rows < r; rows++){
		rowsum = records[rows].test1 + 
			 records[rows].test2 + records[rows].test3;
		rowavg = rowsum / 3;
		records[rows].average = rowavg;
 }
}

//3
void determine_grades(struct student records [], int r){

int rows = 0;

   for (rows = 0; rows < r; rows++){
	if (records[rows].average >= 90.0){
		records[rows].letter_grade = 'A';} 

	else if (records[rows].average < 90.0 
		 && records[rows].average >= 80.0){ 
		records[rows].letter_grade = 'B';}

	else if (records[rows].average < 80.0 
		 && records[rows].average >= 70.0){
		records[rows].letter_grade = 'C';}

	else if (records[rows].average < 70.0 
		 && records[rows].average >= 65.0){
		records[rows].letter_grade = 'D';}

	else {
		records[rows].letter_grade = 'F';}
 }
}

//3
void display(struct student records [], int r){

int rows = 0;

	for (rows = 0; rows < r; rows++){
	     
	printf("%s ", records [rows].first_name);
	printf("%s ", records [rows].last_name);
	printf("%.2lf ", records [rows].average);
	printf("%c\n\n", records [rows].letter_grade);

 }	
}
