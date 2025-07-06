class Solution {
public:
    string checkEvenOdd(int num) {
        if(num % 2 == 0){
            return "Even";
        }else{
            return "Odd";
        }
    }
};


class Solution {
public:
    string checkEvenOdd(int num) {
        if(num & 1){
            return "Odd";
        }else{
            return "Even";
        }
    }
};

class Solution {
public:
    string checkEvenOdd(int num) {
        if(num & 1){
            return "Odd";
        }else{
            return "Even";
        }
    }
};