#include <iostream>

using namespace std;

void print_board(int q[]){ 
  static int sln = 0;
	
  cout << "Solution #" << ++sln << ":\n";

  typedef char box[5][7];
	
  char ws = char(219);
  box bb, wb, *board[8][8];

  //fill in bb=black box, wb=whitebox,
  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 7; ++j){
      wb[i][j] = ' ';
      bb[i][j] = char(219);
    }
	
  //TODO: Draw a black crown
  box bc =
  { {char(219),  char(219), char(219), char(219), char(219), char(219), char(219)},
  {char(219), ' ', char(219), ' ', char(219), ' ',char(219)},
  {char(219), ' ', ' ', ' ', ' ', ' ', char(219)},
  {char(219), ' ', ' ', ' ', ' ', ' ', char(219)},
  {char(219), char(219), char(219), char(219), char(219), char(219),char(219)}};
	
  //TODO: Draw a white crown
  box wc = {
  {' ', ' ', ' ', ' ', ' ', ' ', ' '},
  {' ', char(219), ' ', char(219), ' ', char(219), ' '},
  {' ', char(219), char(219), char(219), char(219), char(219), ' '},
  {' ', char(219), char(219), char(219), char(219), char(219), ' '},
  {' ', ' ', ' ', ' ', ' ', ' ', ' '}};

  //TODO: Add some if statements to hold the black crown
  //      or white crown boxes
  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      if ((i+j) % 2 == 0 ){
        if(q[i] == j) board[i][j] = &wc;
        else board[i][j] = &wb;
      }
      else {
        if (q[i] == j) board[i][j] = &bc;
        else board[i][j] = &bb;
      }
      /*
       * Add some if statements for bc and wc
       */

    }
  }

  // print the board via the pointers in array board
  // first print upper border
  for (int i = 0; i < 7*8; ++i) {
    cout << '_';
  }
	
  cout << '\n';

  // now print the board
  for (int i = 0; i < 8; ++i)
    for (int k = 0; k < 5; ++k) {
      cout << " " << char(179); 
      
      //print left border
		
      for (int j = 0; j < 8; ++j) {
        for (int l = 0; l < 7; ++l) {
          cout << (*board[i][j])[k][l];
        }
      }
      
      cout << char(179) << '\n'; // at end of line print bar and then newline
    }

    //before exiting print lower border
    cout << " ";
    for (int i = 0; i < 7*8; ++i) {
      cout << char(196);
    }
	
  cout << '\n';
}

int main() {
  int sample_board[8] = {0, 1, 2, 3, 4, 5, 6, 7};

  print_board(sample_board);
  
  return 0;
}