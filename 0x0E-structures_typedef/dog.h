#ifndef DOG_H
#define DOG_H

/**
 * struct dog - info about dog.
 *
 * @name: dog name
 * @owner: owner name
 * @age: dog age
 *
 * Description:
 * new type struct dog with the following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif /*DOG_H*/
