// Merge shorter array into the longer array in a sorted format

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeVectors(vector<int> v1, vector<int> v2){
  int i=0, j=0;
  while(j<v2.size()){
    if(v1[i]==v2[j]){
      v1.insert(v1.begin()+(i+1),v2[j]);
      i++; j++;
      v1.pop_back();
    }
    else if(v1[i]<v2[j] && v1[i]!=0)
     i++;
    else {
      v1.insert(v1.begin()+i, v2[j]);
      i++; j++;
      v1.pop_back();
    }
  }
  return v1;
}
int main() {
  vector <int> nums1;
  nums1.push_back(1);
  nums1.push_back(2);
  nums1.push_back(3);
  nums1.push_back(0);
  nums1.push_back(0);
  nums1.push_back(0);

  vector <int> nums2;
  nums2.push_back(2);
  nums2.push_back(5);
  nums2.push_back(6);

  nums1 = mergeVectors(nums1, nums2);
  for(int i=0; i<nums1.size();i++){
    cout << nums1[i] << " ";
  }
  return 0;
}
