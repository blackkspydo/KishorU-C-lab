#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a = 10;
  int *p;
  p = &a;
  printf("%d p\n", (p + 0));
  printf("%d p\n", (p + 1));
  return 0;
}
