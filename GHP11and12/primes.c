Excellent!!  Score: 20/20

/*	We expect 1 input and 10 output prime numbers
	1) create a counter to keep track of primes starting at 0
	2) ask user for for an integer between 0 and 100,000
	3) store given number
	4) when the number is outside the range return an error
	5) test to see if the given numver is a prime 
	5a)if given is divisible by and number between given
	5a) and given / 2, it is not a prime
	6) if not prime add 1 to the user number and start over
	7) if prime, display number
	8) if prime, add one to counter
	9) if prime, add one to the user number
	10) repeat steps 5 - 9 until we have ten prime numbers
	11) exit the program
*/


#include <stdio.h>

int main(void){

	int i = 0;
	int given = 0;
	int amIPrime = 1;

// 1) create a counter to keep track of primes starting at 0

	int counter = 0;	


// 2) ask user for for an integer between 0 and 100,000

printf("\nPlease enter an integer between 0 and 100,000: ");

// 3) store the given number

scanf("%d", &given);

// 4) when the given  number is outside the range return an error

if (given < 0 || given > 100000){

    printf("\nERROR: Integer greater than 100,000 or less than 0\n\n");

return 0;

}

for (int counter = 0; counter < 10; counter){
	
	amIPrime = 1;

	 // 5) test to see if the given number is a prime

	 for (i = 2; i <= given / 2; i++) { 
  
        // 5a) if given  is divisible by any number between 
        // 5b) given  and given / 2, it is not prime 

        	if (given % i == 0) { 
            		amIPrime = 0; 		

	//6) if not prime add 1 to the user number and start over		
			given = given + 1;		
			             
        	}	
	}

	if (amIPrime != 0) {

	// 7) if prime, display number 
	printf("\n%d", given);

	// 8) if prime, add one to counter
	counter = counter + 1;

	// 9) if prime, add one to the user number
	given = given + 1;
    	}

// 10) repeat steps 5 - 9 until the we have 10 prime numbers

}

printf("\n\n"); 

// 11) exit the program
return 0;

}
