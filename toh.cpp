#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> tower[3];
  
  int n, cand = 1, from = 0, move = 0, close, far;

  cout << "Please enter a number of rings: ";
  cin >> n;
  cout << endl;
  
  if (n % 2 == 1){
    close = 1;
    far = 2;
  } else {
    close = 2;
    far = 1;
  }

  int to = close;
  
  // initialize the 3 towers
  for(int i = n+1; i >= 1; i--){
    tower[0].push_back(i);
  }
  tower[1].push_back(n+1);
  tower[2].push_back(n+1);

  while(tower[1].size() < n+1){
    cout << "Move " << ++move << ". Move ring " << cand << " from tower " << char(from + 'A') << " to " << char(to  + 'A') << endl;

    //1. Push the top of the "from" tower to the "to" tower
    //2. Remove the ring from the "from" tower

    tower[to].push_back(tower[from].back());
    tower[from].pop_back();    
    
    //get the next "from" tower, it's not the most recent "to" tower,
    //so which is it?
    //HINT: Get next "from" tower relative to the "to" tower by using a "wrap-around"
    //For example: (to+1)%3 -> this gaurantees the value stays between 0 and 2, the
    //only indexes you can use with your array of vectors!
    
    if (tower[(to+1) % 3].back() < tower[(to+2) % 3].back()){
      from = (to+1) % 3;
    }
    else{
      from = (to+2) % 3;
    }

    cand = tower[from].back();

    //get next "to" tower
    //HINT: Use the same wrap around idea as you did above, but this time, you want
    //to get the "to" tower relative to the "from" tower!
    //HINT: You might have to add another conditional(s) based on odd or even n value

    if (tower[(from+close) % 3].back() > cand){
      to = (from + close) % 3;
    } else {
      to = (from + far) % 3;
    }
  }
  return 0;
}