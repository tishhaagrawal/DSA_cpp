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

void reverse(char arr[]){
  int s = 0;
  int len = lengthOfArray(arr)-1;

  while(s<len){
    swap(arr[s],arr[len]);
    s++; len--;
  }
}

int main() {
  char name[20];
  cout << "Enter your name without any spaces: ";
  cin >> name;
  cout << "Your name is " << name;
  reverse(name);
  cout<<"Reversed name is "<<name;
  return 0;
}
