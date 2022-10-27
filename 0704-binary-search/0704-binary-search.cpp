class Solution {
public:
    int search(vector<int>& nums, int target) { 
        
    int arrSize = nums.size();
    int i = 0;
    
    while (i < arrSize) {
        if (nums[i] != target){
        i++;
     } else if (nums[i] == target){
        return i;  
     }  
  }  
    return -1;
 }
};