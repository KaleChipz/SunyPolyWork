Score: 10/10

/*
Algorithm:
1. Ask user to enter an intger befween 2 and 100,000
2. Record user's input
3. Test if the user's input is between 2 and 100,000 inclusive
   a. If true
      1. Copy user's input to test_prime_index (tpi)
      2. Communicate that the following numbers are the
         next 10 prime numbers
      3. Test if number of primes is less than or equal to 10
         a. If true, test each integer from 2 to one less than
            the test_prime_index looking for a an integer that
            produces no remainder when divided into the
            test_prime_index.
         b. If an integer is found that produces no remainder,
            set the prime_flag to 0 and immediately stop testing
         c. Test if the prime_flag is one
            1. If true,
               a. Display the integer
               b. Increment the number of primes
         d. Increment test_prime_index
         e. Reset the prime flag to 1
         f. Go to step 3.a.3
   b. If false, go to step 4
4. Terminate
*/

//Changes are made at the ~ that go until character 70

#include<stdio.h>

int main (void)
{
   //Local variables
   //New Variables are i and j~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   int input = 0 , tpi = 0 , index = 0 , prime_flag = 1;
   int num_primes = 1 , i = 0 , j = 10;


   //Added new Array~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   int primeArray[11];


   //1. Ask user to enter an intger befween 2 and 100,000
   printf("\nPlease enter an integer between 2 and 100,000: ") ;

   //2. Record user's input
   scanf( "%d" , &input ) ;

   //3. Test if the user's input is between 2 and 100,000 inclusive
   if(input >= 2 && input <= 100000  )
   {
      //a. If true
         //1. Copy user's input to test_prime_index (tpi)
         tpi = input ;

         //2. Communicate that the following numbers are the
         //   next 10 prime numbers
         printf("\nThese are the next 10 prime numbers: " ) ;

         //3. Test if number of primes is less than or equal to 10
         while ( num_primes <= 10 )
         {
            //a. If true, test each integer from 2 to one less than
            //   the test_prime_index looking for a an integer that
            //   produces no remainder when divided into the 
            //   test_prime_index.  
            //b. If an integer is found that produces no remainder,
            //   set the prime_flag to 0 and immediately stop testing
            for ( index = 2 ; index < tpi ; index++ )
            {
               if ( tpi % index == 0 )
               {
                  prime_flag = 0 ;
                  break ;
               }
            }

            //c. Test if the prime_flag is one
            //   1. If true, 
            //      a. Display the integer
            //      b. Increment the number of primes   
            if ( prime_flag == 1 )
            {
	       
               //Adds Prime number to Array position~~~~~~~~~~~~~~~~~
               primeArray[num_primes] = tpi;

               num_primes++  ;
            }

            //d. Increment test_prime_index
            //e. Reset the prime flag to 1
            //f. Go to step 3.a.3 
            tpi++ ;
            prime_flag = 1 ;
         }

   //b. If false, go to step 4
   }

//Added an else to terminate when out of parameters~~~~~~~~~~~~~~~~~~
else 
{

printf("\nPlease enter a number within parameters.\n\n");
return 0;

}

   //Extra linefeeds for spacing
   printf("\n\n" ) ;

	//New for loop to give the output normally~~~~~~~~~~~~~~~~~~~
		for ( i = 1; i <= 10; i++ ) 
		{
			printf("%d\n", primeArray[i] );
		}

   //Line feed for spacing~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   printf("\n" ) ;

   //New Printf to show the reverse order~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   printf("Here are the prime numbers in reverse:\n\n");

   //New while loop to print the order in reverse~~~~~~~~~~~~~~~~~~~~
		while (j >= 1)
		{
			printf("%d\n", primeArray[j]);
			j--;
		}

   //More line spacing~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   printf("\n" ) ;

   //4. Terminate
   return 0 ;
}
