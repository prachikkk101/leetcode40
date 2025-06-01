class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> result;

//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] != 0) {
//                 result.push_back(nums[i]);
//             }
//         }

//         while(result.size() < nums.size()) {
//             result.push_back(0);
//         }

//         for(int i = 0; i < nums.size(); i++) {
//             nums[i] = result[i];
//         }

//         for(int x : nums){
//             std::cout << x << " ";
//         }
//     }
// };
