#include <iostream>
using namespace std;

//////////////////////////////////////////USING ARRAY//////////////////////////////////////////

// void reverseOfArray(int arr[], int size){
//   int start = 0, end = size-1;
//   while(start<end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
//   cout << "The reversed array is ";
//   for(int i=0; i<size;i++){
//     cout<< arr[i] << " ";
//   }
// }
// int main() {
//   int a[20], size;
//   cout << "Enter size of the array (max=20) ";
//   cin >> size;
//   cout << "Enter elements of array ";
//   for(int i = 0; i<size; i++){
//     cin >> a[i];
//   }
//
//   reverseOfArray(a, size);


  // return 0;
// }

//////////////////////////////////////////USING VECTOR//////////////////////////////////////////

#include <vector>
vector <int> reverse(vector<int> v){
  int s=0, e=v.size()-1;
  while(s<e){
    swap(v[s],v[e]);
    s++;
    e--;
  }
  return v;
}
void vectorPrint(vector<int> vec){
  for(int i=0; i<vec.size(); i++){
    cout << vec[i] << " ";
  }
  cout << endl;
}

int main() {
  vector <int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.push_back(7);

  vector<int> ans = reverse(v);
  vectorPrint(ans);
  return 0;
}
