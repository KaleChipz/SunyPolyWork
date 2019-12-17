You did a solid job... some things that need attention on future
programs:

- your first algorithm step is computing-specific and should be 
  removed from your algorithm

- lines longer than 80 characters (including white space) are hard to
  read

- missing formula in algorithm and comments

- #define should be in global area near #include

Score: 17/20 




/*
	1) We are expecting 2 inputs and we will output 3 outputs at end 
	2) Greet user
	3) Promt user for HEIGHT of cylinder
	4) store HEIGHT into variable as float
	5) Prompt user for RADIUS
	6) Store RADIUS in variable as float
	7) Do the volume equiation for cylinder
	8) Store that output into a variable for volume
	9) Print out what user gave us and answer clearly 
	10) Say goodbye
	11) EOP	
*/

#include <stdio.h>

int main(void)
{

//	1) We are expecting 2 inputs and we will output 3 outputs at end 

	double height = 0.00;
	double radius = 0.00;
	#define pi 3.14159265359
	double volume = 0.00;

//	2) Greet user

	printf("\nHello user, Thank you for using my program!\n\n");

//	3) Promt user for HEIGHT of cone

	printf("Please enter the height of your cone as a float value: ");

//	4) store HEIGHT into variable as float

	scanf("%lf", &height);

//	5) Prompt user for RADIUS
	
	printf("\nPlease enter the radius of your cone as a float value: ");

//	6) Store RADIUS in variable as float

	scanf("%lf", &radius); 

//	7) Do the volume equiation for cylinder
//	8) Store that output into a variable for volume

	volume = (pi * (height / 3.0) * (radius * radius)); 

//	9) Print out what user gave us and answer clearly 

	printf("\nThe height you entered: %lf\nThe radius you entered: %lf\n\n", height, radius);
	
	printf("The volume of the cone is: %lf cubic inches\n\n", volume);

//	10) Say goodbye

	printf("Have a great day!\n\n");

//	11) EOP	

return 0; 
}
