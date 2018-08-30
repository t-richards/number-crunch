#include "permutation.h"
#include <stdbool.h>
#include <stdio.h>

#define A set[0]
#define B set[1]
#define C set[2]
#define D set[3]
#define E set[4]
#define H set[5]
#define I set[6]
#define J set[7]
#define K set[8]

typedef struct possibility {
  int subtrahend;
  int minuend;
  int difference;
} possibility;

int from_digits_5(int v, int w, int x, int y, int z) {
  return (v * 10000) + (w * 1000) + (x * 100) + (y * 10) + z;
}

int from_digits_4(int w, int x, int y, int z) {
  return (w * 1000) + (x * 100) + (y * 10) + z;
}

void possibility_init(possibility *p, int *set) {
  p->subtrahend = from_digits_5(A, B, C, D, E);
  p->minuend = from_digits_4(H, I, J, C);
  p->difference = from_digits_5(H, I, D, C, K);
}

bool possibility_valid(possibility *p) {
  return (p->subtrahend - p->minuend) == p->difference;
}

void possibility_print(possibility *p) {
  printf("%d - %d = %d\n", p->subtrahend, p->minuend, p->difference);
}

void possibility_pretty_print(possibility *p) {
  printf("   %5d\n", p->subtrahend);
  printf("  - %4d\n", p->minuend);
  printf("--------\n");
  printf("=  %5d\n", p->difference);
  printf("\n");
}

int main() {
  // A possibility to consider
  possibility p = {0};

  // Starter set of numbers
  int set[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  do {
    // Set values on the struct
    possibility_init(&p, set);

    // Check to see if it worked out
    if (possibility_valid(&p)) {

      // Print the solution
      possibility_print(&p);
    }
  } while (next_permutation(set, 10)); // Important magic

  return 0;
}
