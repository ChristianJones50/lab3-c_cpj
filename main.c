// Author Christian Jones cpj5199@psu.edu
// Collaborator: Ivy Qi ijq5005@psu.edu
// Collaborator: Zakaria Young zjy5116@psu.edu
// Collaborator: Winston Chen wzc5306@psu.edu
// Collaborator: Remington Navarro rmn5299@psu.edu
// Section: 5
// Breakout Room: 4

#include <stdio.h>
#include <readline/readline.h>

// Sum Function
int sum_n(int n) {
  if (n >= 1) {
    return (n + sum_n(n-1));
  }
  else {
    return 0;
  }
}

void print_n(const char *s, int n) {
  if (n > 0) {
    printf("%s\n", s);
    n--;
    print_n(s, n);
  }
}

int main(void) {
  int int_main = atoi(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(int_main));
  char *str_main = readline("Enter a string: ");
  print_n(str_main, int_main);
}