class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        reverse(nums.begin(),nums.end()); //reverses entire array
        reverse(nums.begin(),nums.begin()+k%nums.size()); //reverses from 0-2 index
      reverse(nums.begin()+k%nums.size(),nums.begin()+nums.size()); //reverses from 3rd index to 6th
    }
};