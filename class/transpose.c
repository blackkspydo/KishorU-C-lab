#include <stdio.h>

void input(int row, int col, int arr[row][col]) {
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      printf("Enter value for %dx%d :", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
}

void output(int row, int col, int arr[row][col]) {
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
}

void transpose(int row, int col, int arr[row][col], int trans[col][row]) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      trans[j][i] = arr[i][j];
    }
  }
}

int main() {
  int r1, c1;
  printf("Enter the number of rows: ");
  scanf("%d", &r1);
  printf("Enter the number of columns: ");
  scanf("%d", &c1);
  int arr1[r1][c1];
  input(r1, c1, arr1);
  output(r1, c1, arr1);
  printf("\n\n");
  int trans[c1][r1];
  transpose(r1,c1,arr1,trans);

  output(c1, r1, trans);

  return 0;
}
