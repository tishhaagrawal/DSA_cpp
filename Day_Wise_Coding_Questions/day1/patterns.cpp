#include <iostream>
using namespace std;

int main() {
  int i,j,num;
  cout << "Enter number of rows "<<endl;
  cin >> num;

////////////////////////////////////////////////////////////


/* question 1

   // 1 2 3 4
   // 1 2 3 4
   // 1 2 3 4
   // 1 2 3 4

  for(i=0;i<num;i++){
    for(j=1;j<=num;j++)
      cout << j;
    cout << endl;
  }
*/

/* question 2
  // 1 2 3
  // 4 5 6
  // 7 8 9


  int count = 1;
  for (i=0;i<num;i++){
    for(j=1;j<=num; j++){
      cout << count;
      count++;
    }
    cout << endl;
  }

*/

/* question 3
  // 9 8 7
  // 6 5 4
  // 3 2 1

  int count = num*num;
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      cout << count << " ";
      count--;
    }
    cout<<endl;
  }

*/

/* question 4
 // *
 // * *
 // * * *
 // * * * *

 for(i=0;i<num;i++){
   for(j=0;j<=i;j++)
    cout << "*" << " ";
  cout<<endl;
 }
*/


////////////////////////////////////////////////////////////
  return 0;
}
