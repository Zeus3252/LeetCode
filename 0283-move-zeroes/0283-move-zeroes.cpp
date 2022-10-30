class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int x = 0;
        int y = 1;
        int arrSize = nums.size();
       
        while (y < arrSize){
        if (nums[i] == 0 && nums[y] != 0) { //(If Zero, Nonzero)
            swap(nums[i], nums[y]);
                i++;
                y++;

        } else if (nums[i] != 0 && nums[y] == 0) { //(If Nonzero, Zero)
                i++;
                y++;

        } else if (nums[i] == 0 && nums[y] == 0) { //(If Zero, Zero)
                y++;
            
        } else if (nums[i] != 0 && nums[y] != 0) { //(If Nonzero, Nonzero)
               i++;
               y++; 
        }

     }

   }
};