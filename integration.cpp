#include <iostream>

using namespace std;

typedef double (*FUNC)(double);

// FUNC represents functions of one variable that take a double as input and returns a double 

double integrate (FUNC f, double x, double y){
  double sum = 0;
  for (double i = x; i < y; i+=0.001)
    sum += f(i) * 0.001;

  return sum;
}

double line(double x){
  return x;
}

double square(double x){
  return (x*x);
}

double cube(double x){
  return (x*x*x);
}

int main(){
  
  cout << "The integral of f(x)=x between 1 and 5 is: " << integrate(line, 1, 5) << endl;
  cout << "The integral of f(x)=x^2 between 1 and 5 is: " << integrate(square, 1, 5) << endl;
  cout << "The integral of f(x)=x^3 between 1 and 5 is:" << integrate(cube, 1, 5) << endl;
  
}
