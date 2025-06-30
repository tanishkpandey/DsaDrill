class Solution {
public:
    void printInvertedRightAngleTriangle(int n) {
        for(int i=1; i<=n; i++){
            for(int j=n; j>=i; j--){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};