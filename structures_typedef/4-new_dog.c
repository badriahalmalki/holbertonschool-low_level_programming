#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: pointer to new dog_t, or NULL if fail
*/
dog_t *new_dog(char *name, float age, char *owner)

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
