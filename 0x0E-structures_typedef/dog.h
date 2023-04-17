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
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
