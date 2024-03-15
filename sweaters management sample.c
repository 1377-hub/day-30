#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sweater {
  int id;
  char color[20];
  int size;
  int quantity;
  int i;
};

void addSweater(struct Sweater sweaters[], int *numSweaters) {
  int id, size, quantity;
  char color[20];

  printf("Enter sweater ID: ");
  scanf("%d", &id);

  printf("Enter sweater color: ");
  scanf("%s", color);

  printf("Enter sweater size: ");
  scanf("%d", &size);

  printf("Enter sweater quantity: ");
  scanf("%d", &quantity);

  sweaters[*numSweaters].id = id;
  strcpy(sweaters[*numSweaters].color, color);
  sweaters[*numSweaters].size = size;
  sweaters[*numSweaters].quantity = quantity;

  (*numSweaters)++;
  printf("Sweater added successfully.\n");
}

void displaySweaters(struct Sweater sweaters[], int numSweaters) {
  printf("ID\tColor\tSize\tQuantity\n");
  int i;
  for ( i = 0; i < numSweaters; i++) {
    printf("%d\t%s\t%d\t%d\n", sweaters[i].id, sweaters[i].color, sweaters[i].size, sweaters[i].quantity);
  }
}

void updateSweater(struct Sweater sweaters[], int numSweaters) {
  int id, quantity;

  printf("Enter sweater ID to update: ");
  scanf("%d", &id);
  int i;

  for (i = 0; i < numSweaters; i++) {
    if (sweaters[i].id == id) {
      printf("Enter new quantity: ");
      scanf("%d", &quantity);
      sweaters[i].quantity = quantity;
      printf("Sweater quantity updated!\n");
      return;
    }
  }

  printf("Sweater not found.\n");
}

int main() {
  struct Sweater sweaters[100];
  int numSweaters = 0;
  int choice;

  while (1) {
    printf("\nSchool Sweater Management System\n");
    printf("1. Add sweater\n");
    printf("2. Display sweaters\n");
    printf("3. Update sweater quantity\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        addSweater(sweaters, &numSweaters);
        break;

      case 2:
        displaySweaters(sweaters, numSweaters);
        break;

      case 3:
        updateSweater(sweaters, numSweaters);
        break;

      case 4:
        printf("Exiting program...\n");
        exit(0);

      default:
        printf("Invalid choice!\n");
        break;
    }
  }

  return 0;
}
