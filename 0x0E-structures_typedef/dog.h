#ifdef DOG_H
#define DOG_H
typedef struct dog{
char *name;
float age;
char *owner;
/* declare as many members as desired, but the entire structure size must be known to the compiler. */
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif