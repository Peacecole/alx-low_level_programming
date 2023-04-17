#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - gives dogs description
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_ - type definition for the dog structure
 */
typedef struct dof dog_;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_ *new_dog(char *name, float age, char *owner);
void free_dog(dog_ *d);

#endif
