#include <stdio.h>
#include <unistd.h>
/**
 *  * main - Entry point
 *   *
 *    * Description: Prints a specific message to the standard error.
 *     * Return: Always 1 (Error)
 *      */
int main(void)
{
		char *message =
				"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
			ssize_t len = sizeof(
							"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
				ssize_t written = write(2, message, len);
				if (written != len)
						{
									return (1);
										}
				return (1);
}
