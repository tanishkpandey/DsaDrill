class Solution {
public:
    std::pair<int, int> countZerosAndOnes(const std::vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int size = nums.size();
        for(int i =0; i<size; i++){
            if(nums[i] == 0){
                zeros+=1;
            }
            if(nums[i] == 1){
                ones+=1;
            }
        }

        return {zeros, ones};
    }
};