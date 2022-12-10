class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
    
    int arrSize = nums.size() - 1;
    if(arrSize == 0) {
        return false;
    }
    sort(nums.begin(), nums.end());
    int i = 0;

    while (i < arrSize) {
        if (nums[i] == nums[i+1]) {
        return true;
    } else if (nums[i] != nums[i+1]) {
        i++;
    }
}
    return false;
}
};
        
 