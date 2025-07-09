int searchElementInArray(vector<int>& nums, int target) {
    int size = nums.size();
    for(int i=0; i<size; i++){
        if(nums[i]== target){
            return i;
        }
    }

    return -1; // Placeholder return
}