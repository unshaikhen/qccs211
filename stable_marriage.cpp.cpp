#include <iostream>

using namespace std;

bool ok(int q[], int col){
  int mp[3][3] = {{0, 2, 1}, {0, 2, 1}, {1, 2, 0}}; // man pref
  int wp[3][3] = {{2, 1, 0}, {0, 1, 2}, {2, 0, 1}}; // woman pref
  
  for(int i = 0; i < col; i++){
    if (q[col] == q[i] || mp[i][q[col]] < mp[i][q[i]] && wp[q[col]][i] < wp[q[col]][col] || mp[col][q[i]] < mp[col][q[col]] && wp[q[i]][col] < wp[q[i]][i] ) return false;
    }
  
  return true;
  }

void backtrack(int &col){
  col--;
  if(col == -1)
    exit(1); // exit if fail
}

void print(int q[], int solution){
  cout << "Match # " << solution << endl;
  cout << "Man Woman" << endl;
  for (int i = 0; i < 3; i++){
    cout << i << " " << q[i] << endl;
  }
}


int main() {
  int solution = 0;
  int q[3] = {0};
  q[0] = 0;
  int c = 1;
  bool checkBacktrack = false;
  
  while (true){
    while (c < 3){
      if (!checkBacktrack) q[c] =-1;
      checkBacktrack = false; // resets the bool
      while (q[c] < 3){
        q[c]++;
        while (q[c] == 3){
          backtrack(c);
          q[c]++;
        }
        if (ok(q, c)) break;
      }
      c++;
    }
    solution =+ 1;
    print(q, solution);
    backtrack(c);
    checkBacktrack = true;
  }
  return 0;
}