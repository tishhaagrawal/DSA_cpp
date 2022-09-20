#include <iostream>
using namespace std;

int lengthOfArray(char arr[]){
  int count = 0;
  int i=0;
  while(arr[i] != '\0'){
   count++;
   i++;
 }
  return count;
}

int main() {
  char name[20];
  cout << "Enter your name without any spaces: ";
  cin >> name;
  int len = lengthOfArray(name);
  cout<<"No of char in your name = "<< len;
  return 0;
}
