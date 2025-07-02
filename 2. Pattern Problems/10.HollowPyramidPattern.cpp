class Solution {
public:
    void printHollowPyramid(int n) {
        for(int row=1; row<=n; row++){
            
            //for space
            for(int col=1; col<=(n-row);col++){
                cout<<"  ";
            }

            // for stars
            
            for(int col=1; col<=(2*row)-1; col++){
                if(row==1 || row ==n){
                    cout<<"* ";
                }
                else{
                    cout<<"* ";
                    for(int k=0; k<(2*row)-3; k++){
                        cout<<"  ";
                    }
                    cout<<"* ";
                    break;
                }
            }
            cout<<endl;
        }
    }
};