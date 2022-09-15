// Move all the zeroes present in an array to left and preserve the sequence of previous elements...
// eg i/p -->{2,0,1,0,0,4} then o/p --> {2,1,4,0,0,0}

#include <iostream>
#include <vector>
using namespace std;

vector <int> sortedZeroes(vector<int> given){
  for(int i = 0; i< given.size(); i++){
    if(given[i]==0){
      given.erase(i);
      given.push_back(0);
    }
  }
  return given;
}
int main() {
  vector <int> given;
  given.push_back(2);
  given.push_back(0);
  given.push_back(1);
  given.push_back(0);
  given.push_back(0);
  given.push_back(4);

  given = sortedZeroes(given);

  return 0;
}
