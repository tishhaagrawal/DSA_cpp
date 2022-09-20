//Check if the given string is a pallindrome(ignore all the special characters present in the string)
//eg 1,b,3,%,a,*,a,#,3,&,*,b,@,1 is a valid pallindrome in this case.

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

bool isPallindrome(char arr[]){
  int s = 0;
  int len = lengthOfArray(arr)-1;
  while(s<len){
   if (toLowercase(arr[s])<97 or toLowercase(arr[s])>122){
    s++;
   }
   if (toLowercase(arr[len])<97 or toLowercase(arr[len])>122){
    len--;
   }
   else if(toLowercase(arr[s++])!=toLowercase(arr[len--])){
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
