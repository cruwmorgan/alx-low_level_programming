#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
* main - program will assign a random number to the variable n each time
*/

/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
					int m = n%10;
					if (m > 5)
						printf("Last digit of %d is %u and is greater than 5\n", n , m);
					else if (m == 0)
						printf("Last digit of %d is %u and is 0\n", n , m);
					else if (m < 6 && m != 0)
						printf("Last digit of %d is %u and is less than 6 and not 0\n", n , m);
					else
						return (0);

}
