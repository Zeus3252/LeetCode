class Solution { //Two Pointers Algorithm
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; //i and y are pointers which traverse the nums array
        int y = 1;
        int arrSize = nums.size();
       
        while (y < arrSize){
        if (nums[i] == 0 && nums[y] != 0) { //(If Zero, Nonzero)
            swap(nums[i], nums[y]); //swap the values at both indexes of nums
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