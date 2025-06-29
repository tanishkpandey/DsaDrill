class Solution {
public:
    void printHollowRectangle(int n, int m) {
        for(int i=1; i<=n; i++){
            if(i==1 || i==n){
                for(int j=1; j<=m; j++){
                    cout << "* ";
                }
                cout<<endl;
            } else{
                cout << "* ";
               for(int j=1; j<=m-2; j++){
                    cout << "  ";
                }
                cout << "* ";
                cout<<endl;
            }
        }
    }
};