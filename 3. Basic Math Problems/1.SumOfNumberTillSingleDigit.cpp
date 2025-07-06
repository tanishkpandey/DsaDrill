// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int SumOfNumber(int n){
    int sum=0;
    while(n!=0){
        int digit = n%10;
        sum = sum + digit;
        n=n/10;
    }
    return sum;
}

int main() {
int sum = SumOfNumber(118);
if(sum>9){
    SumOfNumber(sum);
    cout<<"The sum to single Digit is: "<<SumOfNumber(sum);
} else{
   cout<<"The sum to single Digit is: "<<sum;
}
    return 0;
}   