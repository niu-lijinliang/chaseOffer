/*找数组中全出现了奇数次，唯一一个出现了1次的数字*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < 32; i++){
            int count = 0;
            for(auto& num : nums){
                if(num & (1 << i)){
                    count++;
                }
            }
            if(count % 3 == 1){
                ans += (1 << i);
            }
        }
        return ans;
    }
};