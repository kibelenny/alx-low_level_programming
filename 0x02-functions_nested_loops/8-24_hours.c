#include "main.h"
/**
 * jack_bauer - print every minute
 * Return: none
 */
void jack_bauer(void)
{
	int hour;
	int minute;
	
	for (hour = 0; hour < 24; hour++) {
		for (minute = 0; minute < 60; minute ++) {
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(minute / 10);
			_putchar(minute % 10);
			_putchar('\n');
		}
	}
}
