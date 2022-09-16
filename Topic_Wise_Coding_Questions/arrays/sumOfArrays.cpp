//Find the sum of two arrays
// eg arr1= {1,2,3,4} and arr2 = {6} so ans should be 1234+6 = 1240
//now these digits should be individually stored in an array like arr3={1,2,4,0}

#include <iostream>
#include <vector>
using namespace std;

//input elements in array
vector<int> input(vector<int> vec){
  int size, elements;
  cout << "Enter size of your array: ";
  cin>> size;
  cout << "Enter elements of array: ";
  for(int i = 0; i < size; i++){
    cin >> elements;
    vec.push_back(elements);
  }
  return vec;
}

//print vector
void printVec(vector <int> vec){
  cout << "array: ";
  for(int i=0; i<vec.size(); i++){
    cout << vec[i] << " ";
  }
  cout << endl;
}

//calculating sum of two arrays
vector<int> sumOfArrays(vector<int> v1, vector<int> v2){
  int sum = 0, carry = 0;
  int i = v1.size()-1;
  int j = v2.size()-1;
  vector<int> ans;
  while(i>=0 && j>=0){
    sum = v1[i] + v2[j] + carry;
    carry = sum/10;
    sum = sum % 10;
    ans.insert(ans.begin(), sum);
    i--; j--;
  }

  while(i>=0){
    sum = v1[i] + carry;
    carry = sum/10;
    sum = sum % 10;
    ans.insert(ans.begin(), sum);
    i--;
  }

  while(j>=0){
    sum = v2[j] + carry;
    carry = sum/10;
    sum = sum % 10;

    ans.insert(ans.begin(), sum);
    j--;
  }
  while(carry != 0){
    ans.insert(ans.begin(), carry);
    carry = carry/10;
  }
 return ans;
}


int main() {
  vector<int> v1, v2, ans;
  v1 = input(v1);
  v2 = input(v2);
  cout << "1st ";
  printVec(v1);
  cout << "2nd ";
  printVec(v2);
  ans = sumOfArrays(v1, v2);
  cout<<"Sum of the given ";
  printVec(ans);
  return 0;
}
