#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  // variable declaration
  char opcode[BUFSIZ];
  int *memory;
  int accumulator;
  int i;
  int size;
  int x;

  // setting up memory
  printf("Enter memory size: ");
  scanf("%d", &size);
  memory = (int *) malloc(size * sizeof(int));

  // asking for instruction
  printf("Enter instruction: ");

  // repl
  while (scanf("%s %d", opcode, &x) != EOF) {
    if (strcmp(opcode, "ADD") == 0) {
      // Add memory location x into acc.
      accumulator += memory[x];
    } else if (strcmp(opcode, "SUB") == 0) {
      // Substract X from Acc.
      accumulator -= x;
    } else if (strcmp(opcode, "MUL") == 0) {
      // Multiply X with Axcc.
      accumulator *= x;
    } else if (strcmp(opcode, "DIV") == 0) {
      // Divide acc. by X.
      accumulator /= x;
    } else if (strcmp(opcode, "AND") == 0) {
      // And X with acc.
      x = x && accumulator;
    } else if (strcmp(opcode, "NOT") == 0) {
      // Complement acc.
      accumulator = !accumulator;
    } else if (strcmp(opcode, "OR") == 0) {
      // Or X with acc.
      x = x || accumulator;
    } else if (strcmp(opcode, "LD") == 0) {
      // Load memory location X at acc.
      accumulator = memory[x];
    } else if (strcmp(opcode, "ST") == 0) {
      // Store acc. at memory location X
      memory[x] = accumulator;
    } else {
      // unknown opcode
      printf("Unknown opcode: \"%s\"\n", opcode);
    }

    // displaying x, accumulator and memory
    printf("x = %d\n", x);
    printf("accumulator = %d\n", accumulator);
    printf("memory:\n");
    for (i = 0; i < size; ++i) {
      printf("%d: %d\n", i, memory[i]);
    }

    // separator
    printf("\n");

    // asking for instruction
    printf("Enter instruction: ");
  }

  // freeing memory
  free(memory);

  // end of program
  return 0;
}
