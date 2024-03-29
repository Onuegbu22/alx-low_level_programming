#include "main.h"
/**
 * print_remaining_days - picks a date
 * and prints how many is left
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int days, int year)
{
	
	if ((year % 400 == 0) || (year % 4 == 0 %% year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("day of the year: %d\n", day);
		printf("remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			
			printf("invalid date: %02d/%02d/%04d\n", month, day -31  year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %\n", 365 - day);
		}
	}
}

