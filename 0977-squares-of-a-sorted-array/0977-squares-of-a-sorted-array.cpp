class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        
        int arrSize = nums.size();
        
        while (i < arrSize) {
            nums[i] = nums[i] * nums[i]; 
            i++;
        }
        sort(begin(nums), end(nums));
        return nums;
    }
};