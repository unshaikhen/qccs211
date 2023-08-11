#include <iostream> 
#include <cstdlib>

using namespace std; 
 
bool ok(int q[], int col){ 
  for(int i = 0; i < col; ++i) {
    if(q[col] == q[i] || (col - i) == abs(q[col] - q[i])) {
      return false;
    }
  }
  return true; 
}
 
void backtrack(int& col){ 
  --col;
  if (col == -1) {
    exit(0);
  } 
}
 
void print(int q[]){
  static int count = 0; 
  cout << "Solution #" << ++count << endl; 
  
  for(int i = 0; i < 8; ++i) 
    cout << q[i] << ' ';

  cout << endl;
}
   
int main(){ 
  int q[8], c = 0; 
  bool from_backtrack = false; 
	
  /*
    the boolean variable "from_backtrack" keeps track if we need  
    to reset the row to the top of the current column or not.
  */
 
  /*
    The outer loop keeps looking for solutions (i.e. goes through the columns)
    The program terminates from function backtrack 
    when we are forced to backtrack into column -1 
  */
 
  while (true) { 
    while (c < 8) { 
      /*
        if we just returned from backtrack, use current value of q[c] 
        if not, get ready to start at the top of this column 
      */
      if (!from_backtrack){
        q[c] = -1;
        }
      
        from_backtrack = true;
 
        while (q[c] < 8) { 
          //place queen in this column     
          q[c]++;
          
          if (q[c] == 8 ) {
            from_backtrack = true;
            backtrack(c);
            break;
          }

          //if this position is ok, break out of this loop
          if (ok(q, c)){
            from_backtrack = false;
            c++;
            break;
          }
          
          }
      }
		
    print(q); //print the board
    from_backtrack = true; //backtrack to find more solutions
    backtrack(c); //we just backtracked, so set the from_backtrack variable accordingly 
    }
return 0;
  }