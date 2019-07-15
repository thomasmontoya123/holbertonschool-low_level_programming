#include <stdio.h>
#include <stdlib.h>
/**
 * changes - get the amoount of coins
 * @money: money
 *
 * Return: coins
 *
 */

int changes(char *money)
{
	int menuda = atoi(money);
	int coins = 0;

		if ((menuda / 25) >= 0)
		{
			coins += menuda / 25;
			menuda %= 25;
		}
		if ((menuda / 10) >= 0)
		{
			coins += menuda / 10;
			menuda %= 10;
		}
		if ((menuda / 5) >= 0)
		{
			coins += menuda / 5;
			menuda %= 5;
		}
		if ((menuda / 2) >= 0)
		{
			coins += menuda / 2;
			menuda %= 2;
		}
		if((menuda / 1) >= 0)
		coins += menuda / 1;
		menuda %= 1;


		return (coins);
}
/**
 * main - Entry point
 * @argc: number of commands
 * @argv: string of commands
 *
 * Return: int
 *
 */



int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error \n");
		return (1);
	}

	printf("%i \n", changes(argv[1]));
	return (0);
}
