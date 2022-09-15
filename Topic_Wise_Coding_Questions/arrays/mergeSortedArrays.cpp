//Merge two sorted arrays into a third array, and return the array in a sorted format.
#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
  int i = 0, j = 0, k = 0;
  while(i<n && j <m) {
    if (arr1[i] < arr2[j]) {
      arr3[k]=arr1[i];
      i++;
    }
    else{
      arr3[k] = arr2[j];
      j++;
    }
   k++;
  }
  //agar first array bada hai toh uske aage k elements jaise hai waise copy krdo
  while(i<n){
    arr3[k]=arr1[i];
    i++;
    k++;
  }
  //agar second array bada hai toh uske aage k elements jaise hai waise copy krdo
  while(j<m){
    arr3[k]=arr2[j];
    j++;
    k++;
  }
  // now pritning the array -->
  int p = 0;
  while (p<k){
    cout << arr3[p] << " ";
    p++;
  }
}

int main() {
  int arr1[5] = {2,3,7,9,11};
  int arr2[4] = {1,4,8,12};
  int arr3[9];

  merge(arr1, 5, arr2, 4, arr3);


  return 0;
}
