#include "holberton.h"
/**
 * *root13 - encodes into root13
 * @cypher: translation
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return: encode
 *
 */
char *rot13(char *cypher)
{
	int a;
	int b;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char trans[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (a = 0; cypher[a] != '\0'; a++)
	{
		for (b = 0; b <= 52; b++)
		{
			if (cypher[a] == in[b])
			{
				cypher[a] = trans[b];
				break;
			}
		}
	}
	return (cypher);
}
