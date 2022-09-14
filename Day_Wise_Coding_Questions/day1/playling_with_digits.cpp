//to find the diff bet product and sum of the digits of a given number
#include <iostream>
using namespace std;

int diff_of_prod_and_sum(int num){
  int i = 0, sum = 0, prod = 1;
  while(num!=0){
    sum = sum + (num%10);
    prod = prod * (num%10);
    num /= 10;
  }
  return prod - sum;
}
int main() {
  int num;
  cout << "Enter the number: ";
  cin>> num;
  int ans = diff_of_prod_and_sum(num);
  cout << "The diff between the product and sum of the digits of the given number is " << ans << endl;
  return 0;
}
