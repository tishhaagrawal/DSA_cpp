#include <iostream>
#include <cstring>
using namespace std;

char toLowercase(char ch){
  if (ch>='a' && ch<='z')
    return ch;
  else
     return (ch - 'A' + 'a');
}
int lengthOfArray(char arr[]){
  int count = 0;
  int i=0;
  while(arr[i] != '\0'){
   count++;
   i++;
 }
  return count;
}

// void reverse(char arr[]){
//   int s = 0;
//   int len = lengthOfArray(arr)-1;
//
//   while(s<len){
//     swap(arr[s],arr[len]);
//     s++; len--;
//   }
// }

// int main() {
//   char string[20];
//   char copyString[20];
//   cout << "Enter your string without any spaces: ";
//   cin >> string;
//   cout << "Given string is " << string<<endl;
//   strcpy(copyString,string);
//   reverse(string);
//   cout<<"Reversed string is "<<string<<endl;
//   if(copyString==string)
//    cout << "It is a pallindrome";
//   else
//    cout<<"Not a pallindrome";
//
//   return 0;
// }

///////////////////////////////BETTER LOGIC////////////////////////////

bool isPallindrome(char arr[]){
  int s = 0;
  int len = lengthOfArray(arr)-1;
  while(s<len){
    if(toLowercase(arr[s++])!=toLowercase(arr[len--])){
        return 0;
    }
  }
  return 1;
}

int main() {
  char string[20];
  cout << "Enter your string without any spaces: ";
  cin >> string;
  if (isPallindrome(string))
   cout << "It is a pallindrome";
  else
   cout<<"Not a pallindrome";

  return 0;
}
