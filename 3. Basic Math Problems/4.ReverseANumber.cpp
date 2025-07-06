class Solution {
public:
    int reverseNumber(int num) {
        if(num==0){
        return num;
    } else{
        
    int reverseNumber = 0;
    while(num!=0){
        int digit = num % 10;
        reverseNumber = reverseNumber * 10 + digit;    
        num = num/10;
    }
    return reverseNumber;
        
    }
    }
};