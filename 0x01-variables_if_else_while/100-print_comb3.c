#include <stdio.h>

int main(void)
{
	 int i, j;

	 for (i = 0; i < 10; i++)
	 {
		 for (j = i + 1; j < 10; j++)
		 {
			putchar(i + '0');   // Print the first digit
			putchar(j + '0');   // Print the second digit

			if (i != 8 || j != 9) // Avoid printing a comma and space after the last combinat
		    	{
																                    putchar(',');     // Print a comma
																                    putchar(' ');     // Print a space
			}													        }
	 }

	 putchar('\n'); // Print a newline character
	 return (0);
}
