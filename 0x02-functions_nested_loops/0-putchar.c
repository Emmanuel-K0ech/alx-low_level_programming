#include <stdio.h>
void test(char);
/**
 * main - Entry point
 *
 * Description: prints '_putchar' to the screen with a function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	test('_');
	test('p');
	test('u');
	test('t');
	test('c');
	test('h');
	test('a');
	test('r');
	test('\n');

	return (0);
}
/**
 * test - prints a character to the screen
 * @i: represents the input it will take
 *
 */
void test(char i)
{
	putchar(i);
}
