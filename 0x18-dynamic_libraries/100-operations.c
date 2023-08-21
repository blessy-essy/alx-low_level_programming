#include <stdio.h>
/**
* add - adds two integers
* @a: an int
* @b: an int
* Return: the addition result
*/
int add(int a, int b)
{
	int res = 0;

	res = a + b;
	return (res);
}
/**
* sub - the difference between two integers
* @a: an int
* @b: an int
* Return: the difference
*/
int sub(int a, int b)
{
	int res = 0;

	res = a - b;
	return (res);
}
/**
* mul - finds the product of two integers
* @a: an int
* @b: an int
* Return: the product
*/
int mul(int a, int b)
{
	int res = 0;

	res = (a * b);
	return (res);
}
/**
* _div - divides two integers
* @a: an int
* @b: an int
* Return: division result
*/
int _div(int a, int b)
{
	int res = 0;

	if (b != 0)
		res = a / b;
	return (res);
}
/**
* mod - finds the remainder of division
* @a: an int
* @b: an int
* Return: the remainder
*/
int mod(int a, int b)
{
	int res = 0;

	res = a % b;
	return (res);
}
