//to check whether a given number is prime or not

#include <iostream>
using namespace std;
bool checkPrime(int num){
  int isPrime = 1;
  int i=2;
  while(i<num){
    if(num % i == 0){
      isPrime = 0;
      break;
    }
    i++;
  }
  return isPrime;
}
int main() {
  int num;
  cout << "Enter the number you want to check " << endl;
  cin >> num;
  bool isPrime = checkPrime(num);
  if (isPrime)
   cout << num <<" is a prime number" << endl;
  else
   cout << num << " is not prime" << endl;
  return 0;
}
