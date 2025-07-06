class Solution {
public:
    string isPrime(int num) {
        if(num == 1){
            return("No");
        }
        else if(num == 2){
            return("Yes");
        }
        else{
            for(int i=2; i<num; i++){
                if(num % i == 0){
                    return("No");
                }
            }
            return("Yes");
        }
        return("");
    }
};