#include <iostream>

using namespace std;
int main() {
  int q[8][8] = {0}, row, col = 0;
  int count = 0;
  q[0][0] = 1;

  // next column
  NC:
  col++;
  if (col == 8){
    goto PRINT;
    }
  row =-1;

  // next row
  NR:
  row++;
  if (row == 8){
    goto BACKTRACK;
  }
  
  // row test
  for (int i = 0; i < col; i++){
    if (q[row][i] == 1){
      goto NR;
    }
  }

  // up diagonal
  for (int i = 1; (row - i) >= 0 && (col - i) >= 0; i++){
    if (q[row-i][col-i] == 1){
      goto NR;
      }
    }

  // down diagonal test
  for (int i = 1; (row + i) < 8 && (col - i) >= 0; i++){
    if (q[row + i][col - i] == 1){
      goto NR;
    }
  }

  q[row][col] = 1;

  goto NC;
  
  BACKTRACK:
  col--;
  if (col == -1){
    return 0;
  }
  row = 0; 
  while (q[row][col] != 1){
    row++;
  }
  q[row][col] = 0;

  goto NR;

  PRINT:

  cout << "SOLUTION : " << ++count << endl;

  for (int r = 0; r < 8; r++){
    for (int c = 0; c < 8; c++){
      cout << q[r][c] << " ";
    }
    cout << endl;
  }

  goto BACKTRACK;
  
  return 0; 
}