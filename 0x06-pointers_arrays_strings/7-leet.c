#include "holberton.h"
/**
 * *leet - encodes into 1337
 * @trad: translation
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return: encode
 *
 */
char *leet(char *trad)
{
	int n;
	int a;
	char  letter[5][2] = {{'a', 'A'}, {'e', 'E'},
	{'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
	char  numtable[] = {'4', '3', '0', '7', '1'};

	for (a = 0; trad[a] != '\0'; a++)
	{
		for (n = 0; n < 5; n++)
		{
			if (letter[n][0] == trad[a] || letter[n][1] == trad[a])
			{
				trad[a] = numtable[n];
			}

		}

	}
	return (trad);
}
