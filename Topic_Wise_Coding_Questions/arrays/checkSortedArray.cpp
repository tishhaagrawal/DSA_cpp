// check whether the given array is sorted or rotated

#include<iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> v){
  int count = 0;
  for(int i=1;i<v.size();i++){
    if(v[i-1]>v[i]){
      count ++;
    }
  }
  if (v[v.size()-1]>v[0])
   count++;
  return count<=1;
}
int main() {
  vector<int> v;
  int size;
  cout << "Enter size of array: ";
  cin >>size;
  int element;
  for(int i=0; i<size; i++){
    cin >> element;
    v.push_back(element);
  }
  cout << endl;
  bool ans = checkSorted(v);
  cout << "Is the given array is sorted or rotated?" << endl << "(0--> false, 1--> true) " <<endl << "ANS:- " << ans << endl;

  return 0;
}
