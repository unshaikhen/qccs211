#include <iostream>
using namespace std;

int main(){
  int odo[6];

  for (int a = 0; a < 10; a++) {
    odo[0] = a;
    for (int b = 0; b < 10; b++) {
      odo[1] = b;
      for (int c = 0; c < 10; c++) {
        odo[2] = c;
        for (int d = 0; d < 10; d++) {
          odo[3] = d;
          for (int e = 0; e < 10; e++) {
            odo[4] = e;
            for (int f = 0; f < 10; f++) {
              odo[5] = f;
              cout << odo[0] << odo[1] << odo[2] << odo[3] << odo[4] << odo[5] << endl;
            }
          }
        }
      }
    }
  }

  return 0;
}
