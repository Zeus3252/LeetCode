class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int arrSize = nums.size();
        int i = 0;
       
        while (i < arrSize) {
            if (nums[i] == target) {
                return i;
            } else if (nums[i] != target) {
                i++;    
            }
        }
        
        nums.push_back(target);
        sort(nums.begin(), nums.end());
        
        i = 0;
        while (i <= arrSize) {
            if (nums[i] == target) {
                return i;
            } else if (nums[i] != target) {
                i++;    
            }
        }
            
          return 0;
        }
    
};