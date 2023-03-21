#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure that defines a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Defines a dog's name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H_ */

