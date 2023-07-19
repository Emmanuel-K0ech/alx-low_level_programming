#include "function_pointers.h"
/**
 * print_name - prints a string
 * @name: string passed
 * @f: pointer to a function returning void and takes a
 * string as paramenter
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
