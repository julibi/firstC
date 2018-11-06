#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void linePrinter(int maxCount) {
  char str[76];

  for (int i = 0; i < maxCount; i++) {
    str[i] = '-';

    if (i == maxCount - 1) {
      str[i] = '\n';
    }
  }
  printf("%s", str);
}


int main() {
  // append to file
  FILE * fpointer = fopen("studentstable.txt", "a");
  char str[76];
  for (int i = 0; i < 76; i++) {
    str[i] = '-';

    if (i == 75) {
      str[i] = '\n';
    }
  }

  struct Student {
    char first_name[50];
    char last_name[50];
    float gpa;
  };

  struct Student StudentX;

  // scan the data input about the student
  printf("Enter the FIRST NAME of the student: \n");
  scanf("%s", StudentX.first_name);
  printf("Enter the LAST NAME of the student: \n");
  scanf("%s", StudentX.last_name);
  printf("Enter the GPA of the student: \n");
  scanf("%g", &StudentX.gpa);

  // in the next step: work on the string inputs: cut them after a certain length and add ellipsis etc.

  // created dashed Line if file is empty
  printf("%ld", ftell(fpointer));
  if (ftell(fpointer) == 0) {

    fprintf(fpointer, "%s", str);
    fprintf(fpointer, "%s", "|        LAST NAME        |            FIRST NAME            |     GPA     |\n");
    fprintf(fpointer, "%s", str);
  } else {
    printf("Ok, I won't print anything! \n");
  }

  
  // close file
  fclose(fpointer);
  return 0;
}