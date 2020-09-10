class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int l = 0, r = nums.size() - 1;
        while(l < r){
            int sum = nums[l] + nums[r];
            if(sum == target){
                ans.push_back(nums[l]);
                ans.push_back(nums[r]);
                break;
            }
            else if(sum > target){
                r--;
            }
            else{
                l++;
            }
        }
        return ans;
    }
};