#include <stdio.h>
#include <string.h>
#include "../headers/header.h"

struct User {
  char name[50];
  char surname[50];
  int age;
};

union UserUnion {
  char name[50];
  char surname[50];
  int age;
};

void memoryUnionSizeToString(union UserUnion *incomingUnion) {
  printf("Size: %lu\n", sizeof(incomingUnion));
}

void memoryStructSizeToString(struct User *incomingUser) {
  printf("Size: %lu\n", sizeof(incomingUser));
}

void toString(struct User *incomingUser) {
  printf("Name: %s\n", incomingUser->name);
  printf("Surname: %s\n", incomingUser->surname);
  printf("Age: %d\n", incomingUser->age);
}

int main() {
  struct User Denis;
  union UserUnion DenisU;

  messageFor(Denis);

  strcpy(Denis.name, "Denis");
  strcpy(Denis.surname, "Markitanov");
  Denis.age = 21;

  strcpy(DenisU.name, "Denis");
  strcpy(DenisU.surname, "Markitanov");
  DenisU.age = 21;

  // toString(&Denis);
  memoryUnionSizeToString(&DenisU);
  memoryStructSizeToString(&Denis);

  return 0;
}
