#include<limits.h>
class Solution {
public:
    int findMinimum(vector<int>& arr) {
        int size = arr.size();
        int mini = INT_MAX;
        for(int i=0; i<size; i++){
            mini= min(arr[i], mini);
        }
         return mini;
    }
};