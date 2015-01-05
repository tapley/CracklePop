/* HS Prompt: Write a program that prints out the numbers 1 to 100 (inclusive). If the number is divisible by 3,
 * print Crackle instead of the number. If it's divisible by 5, print Pop. If it's divisible by both 3 and 5, 
 * print CracklePop. You can use any language.
 *
 * Language: C
 */

#include<stdio.h>

int main(void)
{
    // Write a program that prints out the numbers 1 to 100 (inclusive).
    for (int i = 1; i <= 100; i++)
    {
	    // If it's divisible by both 3 and 5, print CracklePop.
	    if ((i % 15) == 0)
	    {
		    printf("CracklePop\n");
	    }
        // If the number is divisible by 3, print Crackle instead of the number.
        else if ((i % 3) == 0)
	    {
		    printf("Crackle\n");		
	    }
	    // If it's divisible by 5, print Pop.
	    else if ((i % 5) == 0)
	    {
		    printf("Pop\n");
	    }
	    // If none of the previous conditions are met, print the number.
	    else
	    {
		    printf("%i\n", i);
	    };
    };
}