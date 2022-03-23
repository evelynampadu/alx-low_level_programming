#include <main.h>

/**
*  * infinite_add - adds two numbers
*   * @n1: first number
*    * @n2: second number
*     * @r: buffer for result
*      * @size_r: buffer size
* Return: address of r or 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenS = 0;

	while (*(n1 + len1++))
		;
	while (*(n2 + len2++))
		;
	printf("%d, %d\n", len1, len2);
	return (r);
}
