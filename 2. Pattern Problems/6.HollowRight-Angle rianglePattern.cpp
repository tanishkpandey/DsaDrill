class Solution {
public:
    void printHollowRightAngleTriangle(int n) {
        for(int i=1; i<=n; i++){
            if(i<=2 || i==n){
                for(int  j=1; j<=i; j++){
                    cout<<"* ";
                 } 
            } else{
                 cout<<"* ";
                 for(int j=1; j<=i-2; j++){
                    cout<<"  ";
                 }
                 cout<<"* ";
            }
           cout<< endl;
        }
    }
};