#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * dog_t - creates a new printf.
 * @owner:owner's name
 * @name: dog's name
 * Return: Pointer to the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	if(name == NULL || owner == NULL)
		return(NULL);

	for (i = 0; name[i] != '\0'; i++)

	for (j = 0; owner[j] !='\0'; j++)

	dog_*new_dog = malloc(sizeof(dog_t));

	if (new_dog) == (NULL)
		return (NULL);

	new_dog->name = malloc(i+1);
	new_dog->owner = malloc(j+1);

	if (new_dog->name == NULL || new_dog->owner == NULL) {
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		new_dog->owner[j] = owner[j];
	new_dog->owner[j] = '\0';

	new_dog->age = age;

    	return (new_dog);
}