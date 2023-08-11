#include <iostream>
using namespace std;

void Move(char t, char f, char e, int n){
	static int numMoves = 1;
	if(n==1){
		cout<< numMoves++ << " Move the top ring from "<< f <<" to "<< t <<endl; 
		return;
	} else {

		Move(f,e,t,n-1);
		cout<< numMoves++ << " Move the top ring from "<< f <<" to " <<t <<endl;
		Move(e,t,f,n-1);	
	}
}

int main(){
  int n;
  char a='a',b='b',c='c';

  cout<<"Please enter the number of disks: ";
  cin>>n;
  
  Move(a,b,c,n);	
  cout<<endl;

	return 0;
}
