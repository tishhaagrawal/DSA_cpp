#include <iostream>
using namespace std;

int reverseOfNum(int num){
  int new_num = 0;
  while (num != 0){
    int digit = num % 10;
    new_num = new_num*10 + digit;
    num /= 10;
  }
  return new_num;

}
int main() {
  cout << "Enter the number you want to reverse: ";
  int num;
  cin >> num;
  int new_num = reverseOfNum(num);
  cout << new_num;
  return 0;
}

//try tackling numbers like 8970 or 0987 in this code.
