#include<limits.h>
class Solution {
public:
    int findMaximum(vector<int>& arr) {
        int size = arr.size();
        int maxi = INT_MIN;
        for(int i=0; i<size; i++){
            maxi= max(arr[i], maxi);
        }
         return maxi;
    }
};