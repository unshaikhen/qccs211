#include <iostream>
using namespace std;

int main() {
  string input;
  int counter = 0;
  int runners[26] = {0};
  bool unique[26] = {false};
  double score[26] = {0};
 
// Starts whle loop and asks for input, as well as a way to leave in case of 'done'
  while (input != "done"){
    BEG:
    cout << "Please enter a race outcome in all CAPITAL letters, or 'done' to terminate the program: ";
    cin >> input;
    
    if (input == "done"){
      break;
    }
    
    int length = input.length();
    
    // Counts number of teams
    // A -> 0, B-> 1, C-> 2,..., Z->25
    for(int j = 0; j < length; j++) {
      char c = input[j] - 'A';
      if (!unique[c]){
        unique[c] = true;
        counter++;
      }
      score[c] = score[c] + j + 1;
      runners[c] = runners[c] + 1;
    }
    
    // Counts number of runners in each team
    int numRunners = length / counter;
    
    // Include error condition when teams do not have the same no. of runners (req. new input)
    for(int k = 0; k < 26; k++){
      if(length % counter == 1 || (runners[k] > 0 && runners[k] != numRunners)){
        cout << "ERROR" << endl;
        goto BEG;
      }
    }
    
    // Cout everything
    cout << "There are " << counter << " teams." << endl;
    cout << endl;
    cout << "Each team has " << numRunners << " runners." << endl;
    cout << endl;
    cout << "Team    Score" << endl;
  
    double lowestAmount;
    char winner;
    
    for (int l = 0; l < 26; l++){
      double scoreAmount = score[l] / numRunners;
      char team = l + 'A';
      if (unique[l] == true){
        cout << team << "       " << scoreAmount << endl;
        }
      if (scoreAmount > 0){
        lowestAmount = scoreAmount;
        winner = team;
      }
      if (scoreAmount > 0 && scoreAmount < lowestAmount){
        lowestAmount = scoreAmount;
        winner = team;
      }
      }
  
    cout << endl;
  
    cout << "The winning team is " << winner << " with a score of " <<lowestAmount << "." << endl;

    cout << endl;
    }
  return 0;
  }
