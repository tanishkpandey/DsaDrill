class Solution {
public:
 void printSolidDiamond(int n) {
        //upper part
        for(int row=1; row<=n; row++){
            // space part
            for(int col=1; col<=n-row; col++){
                cout<<"  ";
            }
            
            // star part
            for(int col=1; col<=(2*row-1); col++){
                cout<<"* ";
            }
            cout<<endl;
            
        }
        //lowerpart
        for(int row=n-1; row>=0; row--){
            // space part
            for(int col=1; col<=n-row; col++){
                cout<<"  ";
            }
            
            // star part
            for(int col=1; col<=(2*row-1); col++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};