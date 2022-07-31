#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create struct with properties
struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
  // allocate memory with size of struct Person
  struct Person *who = malloc(sizeof(struct Person));
  // check if it is valid pointer
  assert(who != NULL);
  // duplicate the string
  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;
  return who;
}
void Person_destroy(struct Person *who) {

  assert(who != NULL);
  // Free memory
  free(who->name);
  free(who);
}

void Person_print(struct Person *who) {
  printf("Name %s\n", who->name);
  printf("\tAge %d\n", who->age);
  printf("\tHeight %d\n", who->height);
  printf("\tWeight %d\n", who->weight);
}
int main(int *argc, char *argv[]) {
  // create two persons joe and frank
  struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
  struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
  printf("Joe is at memory location %p:\n", joe);
  Person_print(joe);
  printf("Frank is at memory location %p:\n", frank);
  Person_print(frank);

  // make everyone age 20
  joe->age += 20;
  joe->height -= 2;
  joe->weight += 40;
  Person_print(joe);

  frank->age += 20;
  frank->weight += 20;
  Person_print(frank);
  return 0;
}