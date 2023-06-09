#ifndef DOG
#define DOG
/**
 * struct dog - this is the dog
 * @name: the dog name
 * @age: the dogs age
 * @owner: the dogs owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
