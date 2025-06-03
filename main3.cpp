class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int left = 0;                
        int right = nums.size() - 1;

        while (left < right) {
           
            if (nums[left] > nums[left + 1]) {
                return left;
            } else {
                left++; 
            }
        }


        return right;
    }
};
