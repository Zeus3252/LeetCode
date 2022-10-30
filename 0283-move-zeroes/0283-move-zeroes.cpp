class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int x = 0;
        int y = 1;
       int arrSize = nums.size();
        //cout << arrSize;
        while (y < arrSize){
            if (nums[i] == 0 && nums[y] != 0) { //Comparing 0,1, swap digits
                swap(nums[i], nums[y]); //swap values at indexes
                i++;
                y++;
        } else if (nums[i] == 0 && nums[y] == 0) {//Compare 0,0, traverse second pointer y 
                y++;
        } else { //Compare 1,0, traverse both pointers
                i++;
                y++;
          } 
       }
    }
};