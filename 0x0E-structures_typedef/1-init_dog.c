#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - int a variable of type struct dog
 * @d: pointer
 * @name: first memb
 * @age: second meb
 * @owner: third
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
