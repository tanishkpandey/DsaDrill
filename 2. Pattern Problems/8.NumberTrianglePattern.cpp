class Solution {
public:
    void printNumberTriangle(int n) {
        for(int i=1; i<=n; i++){
            for(int j=0; j<i; j++){
                cout<<i;
            }
            cout <<endl;
        }
    }
};