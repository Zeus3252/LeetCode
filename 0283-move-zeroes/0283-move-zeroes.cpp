class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int x = 0;
        int y = 1;
       int arrSize = nums.size();
        //cout << arrSize;
        while (y < arrSize){
            if (nums[i] == 0 && nums[y] != 0) {
                swap(nums[i], nums[y]);
                i++;
                y++;

        } else if (nums[i] != 0 && nums[y] == 0) {
                i++;
                y++;

        } else if (nums[i] == 0 && nums[y] == 0) {
               
                y++;
        } else {
               i++;
               y++; 
            }

    }

    }
};