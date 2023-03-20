#include <stdio.h>
#include "dog.h"

/**
 * init_dog -   function that prints a struct dog.
 *
 * @d: struct of dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		(d->name != NULL) ? printf("%s\n", d->name) :  printf("(nil)\n");
		printf("Age: ");
		(d->age != NULL) ? printf("%.6f\n", d->age) :  printf("(nil)\n");
		printf("Owner: ");
		(d->owner != NULL) ? printf("%s\n", d->owner) :  printf("(nil)\n");
	}
}
