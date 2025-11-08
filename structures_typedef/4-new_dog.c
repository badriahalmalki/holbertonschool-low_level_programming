#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog_t, or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newdog;
    char *name_copy, *owner_copy;

    newdog = malloc(sizeof(dog_t)); /* Allocate memory for new dog */
    if (newdog == NULL)
        return (NULL);

    name_copy = malloc(strlen(name) + 1); /* Allocate memory for name */
    if (name_copy == NULL)
    {
        free(newdog);
        return (NULL);
    }

    owner_copy = malloc(strlen(owner) + 1); /* Allocate memory for owner */
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(newdog);
        return (NULL);
    }

    strcpy(name_copy, name);
    strcpy(owner_copy, owner);

    newdog->name = name_copy; /* Assign copied name */
    newdog->age = age;
    newdog->owner = owner_copy;

    return (newdog);
}
