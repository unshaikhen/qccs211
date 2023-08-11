#include <iostream>
using namespace std;

bool ok(int q[]){
  for (int i = 7; i > 0; i--){
    for (int k = 0; k < i; k++){
      if (q[i] == q[k] || i-k == abs(q[i] - q[k])) return false;
    }
  }
  return true;
}

void print(int q[], int count){        
  cout << "Solution: #" << count << endl;

    for(int b=0; b<8; b++){
         cout<< q[b];               
         }                      
      cout<<endl;
  }


int main(){
  int q[8] = {0};
  int count = 1;
  for (int a = 0; a < 8; a++){
    for (int b = 0; b < 8; b++){
      for (int c = 0; c < 8; c++){
        for (int d = 0; d < 8; d++){
          for (int e = 0; e < 8; e++){
            for (int f = 0; f < 8; f++){
              for (int g = 0; g < 8; g++){
                for (int h = 0; h < 8; h++){
                  q[0] = a;
                  q[1] = b;
                  q[2] = c;
                  q[3] = d;
                  q[4] = e; 
                  q[5] = f;
                  q[6] = g;
                  q[7] = h;

                  if (ok(q)) 
                    print(q, count++);   

                  q[0]=0;
                  q[1]=0;
                  q[2]=0;
                  q[3]=0;
                  q[4]=0;
                  q[5]=0;
                  q[6]=0;
                  q[7]=0;                  
                }
               
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
