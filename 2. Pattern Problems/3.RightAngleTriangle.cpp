class Solution {
public:
    void printRightAngleTriangle(int n) {
       for(int i=0; i<n; i++){
        for (int j=0; j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
       }
    }
};