#include <stdlib.h>
#include "dog.h"

/**
 * _strring - string pointer
 * @s: calculated string
 *
 * Return: string lenght
 */
int _strring(char *s)
{
	int z;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}

	return (z);
}

/**
 * *_strdup - duplicate the string
 * @dest: direction of the buffer
 * @src: copy string
 *
 * Return: dest pointer
 */
char *_strdup(char *dest, char *src)
{
	int lon, z;

	lon = 0;

	while (src[lon] != '\0')
	{
		lon++;
	}

	for (z = 0; z < lon; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = '\0';

	return (dest);
}

/**
 * new_dog - new god to be create
 * @age: dog age
 * @owner: dog owner
 * @name:dog name
 *
 * Return: new dog pointer or return 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strring(name);
	len2 = _strring(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strdup(dog->name, name);
	_strdup(dog->owner, owner);
	dog->age = age;

	return (dog);
}

