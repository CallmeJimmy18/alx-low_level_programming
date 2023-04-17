#ifndef DOG
#define DOG
/**
 * struct dog - this is the dog
 * @name: the dog name
 * @age: the dogs age
 * @owner: the dogs owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
