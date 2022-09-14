#include <iostream>
using namespace std;

void fibo(int num_of_terms){
  int a = 0, b = 1;
  if (num_of_terms==1)
   cout << a <<" ";
  else if (num_of_terms==2)
   cout << a << " " << b << " ";
  else{
    cout << a << " " << b << " ";
    int i=3;
    while(i<= num_of_terms){
      int c = a + b;
      cout << c << " ";
      a = b;
      b = c;
      i++;
    }


  }
}
int main() {
  cout << "Enter total number of terms ";
  int num_of_terms;
  cin >> num_of_terms;
  fibo(num_of_terms);

  return 0;
}
