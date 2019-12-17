Well done!!! Score: 20/20

/*
Algorithm:
    1. Ask the user to enter a multiple-place integer
    2. Record the user's input
    3. Place the integer into a second storage
       location (temp) to preserve the original
       value entered by the user
    4. Reverse the integer
       4a. Copy the last digit from temp
       4b. Place (add) the copied last digit into a different
           temporary location (temp2) after temp2 has been
           multiplied by 10 (this will shift the digits
           of temp2 one place to the left before adding
           the removed digit)
       4c. Remove the last digit from temp
       4d. Repeat steps 4a - 4c as long as temp is greater
           than 0
    5. Test to see if temp2 is equal to input
       5a. If true, communicate that the input is a palindrome
       5b. If not true, communicate that the input is not
           palindrome
    6. Terminate
*/

#include<stdio.h>


// START OF PROTOTYPES
int function_1();

int function_2(int temp);

void function_3(int temp2, int input);

// START OF MAIN FUNCTION
int main( void )
{
    //Steps 1 and 2
	int input = function_1();

    //3. Place the integer into a second storage
    //   location (temp) to preserve the original
    //   value entered by the user.
	int  temp = input ;

    //Step 4 through 4d 
	int temp2 = function_2(temp);

    //Step 5 through 5b
	function_3(temp2, input);

    //6. Terminate
    return 0;
}

// START OF  USER CREATED FUNCTIONS
int function_1(){
int input, removed, temp, temp2;
    //1. Ask the user to enter a multiple-place integer
    printf("\nPlease enter a multi-place integer: ");

    //2. Record the user's input
    scanf("%d", &input);
	return input;
}

int function_2(int temp){
 //4. Reverse the integer
int temp2 = 0 , removed = 0;
int input;
    while (temp > 0)
    {   
//   4a. Copy the last digit from temp
        removed = temp % 10 ;
        //   4b. Place (add) the copied last digit into a different
        //       temporary location (temp2) after temp2 has been
        //       multiplied by 10 (this will shift the digits
        //       of temp2 one place to the left before adding
        //       the removed digit)
        temp2 = (temp2 * 10) + removed ;
        //   4c. Remove the last digit from temp
        temp = temp / 10 ;
        //   4d. Repeat steps 4a - 4c as long as temp is greater
        //       than 0
    }		
		return temp2;	
}

void function_3(int temp2, int input ){
int temp, removed;
 //5. Test to see if temp2 is equal to input
    if(temp2 == input) {
       //5a. If true, communicate that the input is a palindrome
	printf("\nYour input is a palindrome.\n\n");
	return;
    } else {
       //5b. If not true, communicate that the input is not a
       //    palindrome
       printf("\nYour input is not a palindrome.\n\n");
	return;
 }
}
