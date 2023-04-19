/**
 * print_name - a function that prints a name
 * @name: pointer to tha name
 * @f: function p
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
