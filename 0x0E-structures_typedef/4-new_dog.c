#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: this is the name of the dog
 * @age: this is the age of the dog
 * @owner: this is the owner of the dog
 * Return: returns NULL or thedog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *thedog;
int h;
int j;
h = strlen(name);
j = strlen(owner);
thedog = malloc(sizeof(dog_t));
if (thedog == NULL)
{
return (NULL);
}
thedog->name = malloc(sizeof(char) * (h + 1));
if (thedog->name == NULL)
{
free(thedog);
return (NULL);
}
thedog->owner = malloc(sizeof(char) * (j + 1));
if (thedog->owner == NULL)
{
free(thedog);
free(thedog->name);
return (NULL);
}
strcpy(thedog->name, name);
strcpy(thedog->owner, owner);
thedog->age = age;
return (thedog);
}
