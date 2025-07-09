class Solution {
public:
    double findAverage(const vector<int>& arr) {

        double sum = 0;
        int size = arr.size();

        for(int i=0; i<size; i++){
            sum = sum+arr[i];
        }

        return sum/size;
    }
};