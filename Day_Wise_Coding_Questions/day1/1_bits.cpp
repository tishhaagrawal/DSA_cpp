#include <iostream>
using namespace std;

int noOfBits(int num){
  int count = 0;
  while (num != 0){
    if(num & 1 == 1)
     count ++;
    num = num >> 1;
  }
  return count;
}
int main() {
  int num;
  cout << "Enter any number: ";
  cin>>num;
  int bits = noOfBits(num);
  cout << "No of 1 bits in the given decimal number: " << bits << endl;
  return 1;
}
