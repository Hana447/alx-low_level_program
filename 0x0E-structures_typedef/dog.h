#ifndef DOG_H
#define DOG_H

/**
  * struct dog - This is structure
  * @name: param1
  * @age: param2
  * @owner: param3
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog, dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
