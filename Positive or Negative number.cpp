// EXPERIMENT - 3
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC-A3
//Problem Statement: Write a code to find whether a given number is positve , negative or zero.

#include <iostream>
using namespace std;
int main(){
  int number;
  cout<<"Enter a number:"<<endl;
  cin>>number;
  if(number>0){
      cout<<" The number is positive" <<endl;
  } else if (number<0){
      cout<<"The number is negative" << endl;
}else {
    cout<<"The number is 0"<<endl;
}
  return 0;
}


/* output :
Enter a number: -8
The number is negative */
