#include <iostream>
using namespace std;

/////////////////////////////////////USING ARRAY///////////////////////////////

// void rotateArr(int arr[], int size, int key){
//   int rotated[20];
//   for(int i=0;i<size;i++){
//     rotated[(i+key)%size] = arr[i];
//   }
//   arr = rotated;
//   for(int i=0;i<size;i++){
//     cout << arr[i] << " ";
//   }
// }
// int main() {
//   int arr[20] = {1,2,3,4,5,6};
//   rotateArr(arr, 6, 3);
//
//   return 0;
// }

////////////////////////////////////////////////USING VECTOR/////////////////////////
#include <vector>
int main() {
  vector <int> nums;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  nums.push_back(4);
  nums.push_back(5);
  int k;
  cout << "Enter rotation key: ";
  cin >>k;
  vector<int> temp(nums.size());
  for (int i=0; i<nums.size(); i++){
    temp[(i+k)%nums.size()]=nums[i];
  }
  nums = temp;
  for(int i=0; i<nums.size(); i++){
    cout << nums[i] << " ";
  }
  return 0;
}
