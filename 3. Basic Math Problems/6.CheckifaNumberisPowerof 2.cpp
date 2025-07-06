#include<iostream>
using namespace std;

  string isPowerOfTwo(int num) {
    if(num == 0){
        return("No");
    }
    if ((num & (num - 1)) == 0) {
      return ("Yes");
    }
    return ("No");
  }

int main(){
    cout<<isPowerOfTwo(64);
    return 0;
}