#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @r: the value
 * Description: The standard library provides a similar funtion
 *
 * Return: (0)
 *
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r *= -1);
	}

}
