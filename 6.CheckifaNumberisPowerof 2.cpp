#include<iostream>
using namespace std;

string checkPowerOfTwo(int num){
    if ((num & (num-1)) == 0){
        return("Yes");
    }
    return("No");
}

int main(){
    cout<<checkPowerOfTwo(64);
    return 0;
}